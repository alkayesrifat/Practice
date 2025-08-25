// Problem Link : https://www.geeksforgeeks.org/problems/implementing-floyd-warshall2042/1


//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    void shortestDistance(vector<vector<int>>& mat) {
        // Code here
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j < n ;j++){
                    
                if(mat[i][j]== -1 ){
                    mat[i][j] = 100000000 ;
                }
                
            }
        }
        
        
        
        
        
        for(int k = 0 ; k< n ; k++){
            for(int i = 0 ; i< n ; i++){
                for(int j = 0 ; j < n ;j++){
                    
                    if(mat[i][k]!= 100000000 && mat[k][j]!= 100000000 && mat[i][k] + mat[k][j] < mat[i][j]){
                        mat[i][j] = mat[i][k] + mat[k][j] ;
                    }
                
                }
            }
        }
        
        
        
                
        for(int i = 0 ; i< n ; i++){
            for(int j = 0 ; j < n ;j++){
                    
                if(mat[i][j]== 100000000) {
                    mat[i][j] = -1 ;
                }
                
            }
        }
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<vector<int>> matrix(n, vector<int>(n, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> matrix[i][j];
            }
        }
        Solution obj;
        obj.shortestDistance(matrix);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << "\n";
        }

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends