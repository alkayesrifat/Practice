import{useState, useEffect, useRef} from 'react';
import{toast} from "sonner";
import{Save, Share, Copy, Download, ChevronDown, Edit, Check} from 'lucide-react';
import ShareModal from './ShareModal';
import{codeService} from '@/lib/codeService';
import{
    DropdownMenu,
    DropdownMenuContent,
    DropdownMenuItem,
    DropdownMenuTrigger,
} from "@/components/ui/dropdown-menu";

interface EditorProps
{
    initialCode ?: string;
    readOnly ?: boolean;
    codeId ?: string;
    initialFileName ?: string;
}

// Define getFileExtension function first to avoid the reference error
const getFileExtension = (lang : string) =>
{
    const extensions : Record<string, string> = {
        javascript : 'js',
        typescript : 'ts',
        jsx : 'jsx',
        tsx : 'tsx',
        python : 'py',
        html : 'html',
        css : 'css',
        java : 'java',
        csharp : 'cs',
        cpp : 'cpp',
        c : 'c',
        go : 'go',
        rust : 'rs',
        ruby : 'rb',
        php : 'php',
        swift : 'swift',
        kotlin : 'kt',
        dart : 'dart',
        scala : 'scala',
        haskell : 'hs',
        perl : 'pl',
        shell : 'sh',
        powershell : 'ps1',
        sql : 'sql',
        markdown : 'md',
        json : 'json',
        yaml : 'yaml',
        xml : 'xml',
        graphql : 'graphql',
        lua : 'lua',
        r : 'r',
        matlab : 'matlab',
        objectivec : 'objective-c',
        elixir : 'ex'
    };
    return extensions[lang] || 'txt';
};

function getDefaultFileName(lang : string)
{
    const ext = getFileExtension(lang);
    return ext == = 'txt' ? 'untitled' : `untitled.$ { ext }
    `;
}

const Editor = ({initialCode = '', readOnly = false, codeId, initialFileName} : EditorProps) =>
{
    const[code, setCode] = useState(initialCode);
    const[language, setLanguage] = useState('javascript');
    const[isShareModalOpen, setIsShareModalOpen] = useState(false);
    const[isSaving, setIsSaving] = useState(false);
    const[savedCodeId, setSavedCodeId] = useState<string | null>(codeId || null);
    const editorRef = useRef<HTMLTextAreaElement>(null);
    const lineCountRef = useRef<HTMLDivElement>(null);
    const editorContentRef = useRef<HTMLDivElement>(null);
    const[editingFileName, setEditingFileName] = useState(false);
    const[fileName, setFileName] = useState(initialFileName || getDefaultFileName(language));
    const fileNameInputRef = useRef<HTMLInputElement>(null);

    // Handle line numbers with improved VS Code-like styling
    useEffect(() = > {
        if (!lineCountRef.current)
            return;

        const lineCount = code.split('\n').length;
        const lineNumbers = Array.from({length : lineCount}, (_, i) = > i + 1)
                                .map(num = > `<div class = "line-number-item"> ${num} < / div >`)
                                .join('');

        lineCountRef.current.innerHTML = lineNumbers;
    },
              [code]);

    // Sync scrolling between editor and line numbers
    useEffect(() = > {
        const editorContent = editorContentRef.current;
        const lineNumbers = lineCountRef.current;

        if (!editorContent || !lineNumbers)
            return;

        const handleScroll = () =>
        {
            if (lineNumbers)
            {
                lineNumbers.scrollTop = editorContent.scrollTop;
            }
        };

        editorContent.addEventListener('scroll', handleScroll);
        return () =>
        {
            editorContent.removeEventListener('scroll', handleScroll);
        };
    },
              []);

    // Auto-resize textarea based on content
    useEffect(() = > {
        if (editorRef.current)
        {
            editorRef.current.style.height = 'auto';
            editorRef.current.style.height = `${editorRef.current.scrollHeight} px`;
        }
    },
              [code]);

    // Focus on filename input when editing
    useEffect(() = > {
        if (editingFileName && fileNameInputRef.current)
        {
            fileNameInputRef.current.focus();
            fileNameInputRef.current.select();
        }
    },
              [editingFileName]);

    // Update default filename when language changes
    useEffect(() = > {
        if (!initialFileName && !editingFileName)
        {
            setFileName(getDefaultFileName(language));
        }
    },
              [ language, initialFileName ]);

    const handleCodeChange = (e : React.ChangeEvent<HTMLTextAreaElement>) =>
    {
        setCode(e.target.value);
    };

    const handleSave = async() =>
    {
        try
        {
            setIsSaving(true);
            const {id} = await codeService.saveCode(code, language);
            setSavedCodeId(id);
            toast.success("Code saved successfully", {
                description : "You can now share this code with others."
            });
            return id;
        }
        catch (error)
        {
            toast.error("Failed to save code", {
                description : "Please try again later."
            });
            throw error;
        }
        finally
        {
            setIsSaving(false);
        }
    };

    const handleShare = () =>
    {
        setIsShareModalOpen(true);
    };

    const handleCopy = () =>
    {
        navigator.clipboard.writeText(code);
        toast.success("Code copied to clipboard");
    };

    const handleDownload = () =>
    {
        const element = document.createElement('a');
        const file = new Blob([code],
                              {type: 'text/plain' });
        element.href = URL.createObjectURL(file);
        element.download = fileName;
        document.body.appendChild(element);
        element.click();
        document.body.removeChild(element);
        toast.success("Code downloaded successfully");
    };

    const startEditingFileName = () =>
    {
        setEditingFileName(true);
    };

    const saveFileName = () =>
    {
        setEditingFileName(false);
    };

    const handleFileNameChange = (e : React.ChangeEvent<HTMLInputElement>) =>
    {
        setFileName(e.target.value);
    };

    const handleFileNameKeyDown = (e : React.KeyboardEvent<HTMLInputElement>) =>
    {
        if (e.key == = 'Enter')
        {
            saveFileName();
        }
    };

    const languages = [
        {value : 'javascript', label : 'JavaScript'},
        {value : 'typescript', label : 'TypeScript'},
        {value : 'jsx', label : 'JSX'},
        {value : 'tsx', label : 'TSX'},
        {value : 'python', label : 'Python'},
        {value : 'html', label : 'HTML'},
        {value : 'css', label : 'CSS'},
        {value : 'java', label : 'Java'},
        {value : 'csharp', label : 'C#'},
        {value : 'cpp', label : 'C++'},
        {value : 'c', label : 'C'},
        {value : 'go', label : 'Go'},
        {value : 'rust', label : 'Rust'},
        {value : 'ruby', label : 'Ruby'},
        {value : 'php', label : 'PHP'},
        {value : 'swift', label : 'Swift'},
        {value : 'kotlin', label : 'Kotlin'},
        {value : 'dart', label : 'Dart'},
        {value : 'scala', label : 'Scala'},
        {value : 'haskell', label : 'Haskell'},
        {value : 'perl', label : 'Perl'},
        {value : 'shell', label : 'Shell'},
        {value : 'powershell', label : 'PowerShell'},
        {value : 'sql', label : 'SQL'},
        {value : 'markdown', label : 'Markdown'},
        {value : 'json', label : 'JSON'},
        {value : 'yaml', label : 'YAML'},
        {value : 'xml', label : 'XML'},
        {value : 'graphql', label : 'GraphQL'},
        {value : 'lua', label : 'Lua'},
        {value : 'r', label : 'R'},
        {value : 'matlab', label : 'MATLAB'},
        {value : 'objectivec', label : 'Objective-C'},
        {value : 'elixir', label : 'Elixir'}
    ];

  return (
    <div className="editor-container h-full animate-fade-in">
      <div className="editor-header">
        <div className="flex items-center">
          {editingFileName ? (
            <div className="flex items-center">
              <input
                ref={fileNameInputRef}
                type="text"
                value={fileName}
                onChange={handleFileNameChange}
                onKeyDown={handleFileNameKeyDown}
                onBlur={saveFileName}
                className="editor-tab active mr-1 bg-transparent border-b-2 border-editor-accent outline-none"
              />
              <button 
                onClick={saveFileName}
                className="text-editor-accent hover:text-editor-text"
              >
                <Check size={14} />
              </button>
            </div>
          ) : (
            <div className="editor-tab active flex items-center">
              <span>{fileName}</span>
              {!readOnly && (
                <button 
                  onClick={startEditingFileName} 
                  className="ml-2 text-editor-dim hover:text-editor-text"
                  aria-label="Edit file name"
                >
                  <Edit size={14} />
                </button>
              )}
            </div>
          )}
          <DropdownMenu>
            <DropdownMenuTrigger className="ml-4 bg-secondary text-editor-text px-3 py-1.5 rounded text-sm border border-border flex items-center gap-1.5">
              {languages.find(lang => lang.value === language)?.label || 'Select language'}
              <ChevronDown size={14} />
            </DropdownMenuTrigger>
            <DropdownMenuContent className="max-h-60 overflow-y-auto">
              {languages.map((lang) => (
                <DropdownMenuItem 
                  key={lang.value} 
                  onClick={() => setLanguage(lang.value)}
                  className={language === lang.value ? "bg-editor-highlight text-editor-text" : ""}
                >
                  {lang.label}
                </DropdownMenuItem>
              ))}
            </DropdownMenuContent>
          </DropdownMenu>
        </div>
        
        <div className="flex items-center space-x-2">
          {!readOnly && (
            <button 
              onClick={handleSave}
              className="vs-button-primary flex items-center gap-1.5 glow-blue"
              aria-label="Save code"
              disabled={isSaving}
            >
              <Save size={16} />
              <span>{isSaving ? 'Saving...' : 'Save'}</span>
            </button>
          )}

          <button 
            onClick={handleShare}
            className="vs-button-secondary flex items-center gap-1.5"
            aria-label="Share code"
          >
            <Share size={16} />
            <span>Share</span>
          </button>

          <button 
            onClick={handleCopy}
            className="vs-button-secondary flex items-center gap-1.5"
            aria-label="Copy code"
          >
            <Copy size={16} />
            <span className="hidden sm:inline">Copy</span>
          </button>
          <button 
            onClick={handleDownload}
            className="vs-button-secondary flex items-center gap-1.5"
            aria-label="Download code"
          >
            <Download size={16} />
            <span className="hidden sm:inline">Download</span>
          </button>
        </div>
      </div>
      
      <div className="editor-content flex" ref={editorContentRef}>
        <div 
          ref={lineCountRef} 
          className="line-numbers py-2 text-right pr-2 select-none"
          aria-hidden="true"
        ></div>
        <textarea
          ref={editorRef}
          value={code}
          onChange={handleCodeChange}
          className="flex-1 bg-transparent outline-none resize-none font-mono text-sm p-2 min-h-[70vh] vs-code-editor"
          placeholder="Start coding here..."
          spellCheck="false"
          readOnly={readOnly}
        />
      </div>
      
      <div className="status-bar">
        <div className="flex items-center">
          <div className="status-item">
            {languages.find(lang => lang.value === language)?.label || language}
          </div>
          <div className="status-item">
            {code.split('\n').length} lines
          </div>
          <div className="status-item">
            {code.length} characters
          </div>
        </div>
        <div className="status-item">
          {readOnly ? 'Read-only' : 'Ready'}
        </div>
      </div>

      <ShareModal 
        isOpen={isShareModalOpen} 
        onClose={() => setIsShareModalOpen(false)}
        codeId={savedCodeId || ''}
        language={language}
        onSave={!savedCodeId ? handleSave : undefined}
        code={code}
      />
    </div>
  );
};

export default Editor;