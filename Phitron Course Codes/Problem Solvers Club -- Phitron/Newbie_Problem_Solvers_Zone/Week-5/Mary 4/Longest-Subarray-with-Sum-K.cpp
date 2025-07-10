//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        
        int  n = arr.size();
        int l = 0 , r = 0 ;
        
        int ans = 0 ;
        
        long long int sum = 0 ; 
        
        
        while(r < n ){
            
            sum+=arr[r];
            
            if(sum == k){
                ans = max(ans,(r-l+1));
            }
            else{
                while(sum > k && l < n ){
                    
                    if(arr[l] < 0 ){
                        sum += arr[l];
                    }
                    else sum-=arr[l];
                    l++;
                }
                
            }
            r++;
            
            
        }
        cout << ans ;
       
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.longestSubarray(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}

// } Driver Code Ends