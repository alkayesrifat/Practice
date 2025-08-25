import pyaudio
import numpy as np
import threading
import queue
import time
import librosa
import soundfile as sf
import io

class SimpleVocalExtractor:
    def __init__(self):
        # Audio parameters
        self.FORMAT = pyaudio.paFloat32
        self.CHANNELS = 2
        self.RATE = 44100
        self.CHUNK_SIZE = 1024
        self.BUFFER_SIZE = 10
        
        # Threading and queues
        self.input_queue = queue.Queue(maxsize=self.BUFFER_SIZE)
        self.output_queue = queue.Queue(maxsize=self.BUFFER_SIZE)
        self.running = False
        
        # Initialize PyAudio
        self.p = pyaudio.PyAudio()
        self.find_loopback_device()
        
    def find_loopback_device(self):
        """Find the system's loopback device for audio capture"""
        for i in range(self.p.get_device_count()):
            dev = self.p.get_device_info_by_index(i)
            if 'loopback' in dev['name'].lower():
                self.input_device = i
                return
        # Fallback to default input device
        self.input_device = self.p.get_default_input_device_info()['index']
        print("Warning: No loopback device found. Using default input device.")
    
    def simple_vocal_extraction(self, audio_data):
        """Simple center-channel extraction for vocal isolation"""
        # Convert bytes to numpy array
        audio_np = np.frombuffer(audio_data, dtype=np.float32)
        
        # Reshape to [channels, samples]
        audio_np = audio_np.reshape(-1, self.CHANNELS)
        
        # Extract center channel (where vocals are typically mixed)
        center = np.mean(audio_np, axis=1)
        
        # Reduce side channels (instrumentals)
        side = audio_np - center[:, np.newaxis]
        reduced_side = side * 0.3  # Reduce instrumentals by 70%
        
        # Recombine
        result = center[:, np.newaxis] + reduced_side
        
        # Flatten and convert back to bytes
        return result.astype(np.float32).tobytes()
    
    def audio_capture(self):
        """Capture audio from the system"""
        stream = self.p.open(
            format=self.FORMAT,
            channels=self.CHANNELS,
            rate=self.RATE,
            input=True,
            input_device_index=self.input_device,
            frames_per_buffer=self.CHUNK_SIZE
        )
        
        while self.running:
            try:
                data = stream.read(self.CHUNK_SIZE, exception_on_overflow=False)
                self.input_queue.put(data)
            except Exception as e:
                print(f"Capture error: {e}")
                break
                
        stream.stop_stream()
        stream.close()
    
    def process_audio(self):
        """Process audio to reduce instrumentals"""
        while self.running:
            try:
                data = self.input_queue.get(timeout=1)
                processed_data = self.simple_vocal_extraction(data)
                self.output_queue.put(processed_data)
            except queue.Empty:
                continue
            except Exception as e:
                print(f"Processing error: {e}")
                break
    
    def audio_playback(self):
        """Play the processed audio"""
        stream = self.p.open(
            format=self.FORMAT,
            channels=self.CHANNELS,
            rate=self.RATE,
            output=True,
            frames_per_buffer=self.CHUNK_SIZE
        )
        
        while self.running:
            try:
                data = self.output_queue.get(timeout=1)
                stream.write(data)
            except queue.Empty:
                continue
            except Exception as e:
                print(f"Playback error: {e}")
                break
                
        stream.stop_stream()
        stream.close()
    
    def start(self):
        """Start the real-time processing"""
        self.running = True
        
        # Start threads
        self.capture_thread = threading.Thread(target=self.audio_capture)
        self.process_thread = threading.Thread(target=self.process_audio)
        self.playback_thread = threading.Thread(target=self.audio_playback)
        
        self.capture_thread.start()
        self.process_thread.start()
        self.playback_thread.start()
        
        print("Vocal extractor started. Press Ctrl+C to stop.")
        
        try:
            while self.running:
                time.sleep(0.1)
        except KeyboardInterrupt:
            self.stop()
    
    def stop(self):
        """Stop all processing"""
        self.running = False
        
        self.capture_thread.join()
        self.process_thread.join()
        self.playback_thread.join()
        
        self.p.terminate()
        print("Vocal extractor stopped.")

if __name__ == "__main__":
    extractor = SimpleVocalExtractor()
    extractor.start()