//Link  : https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in an undirected graph.
    bool visited[100005];
    bool flag ;
    int par[100005];
    void cycledfs(vector<vector<int>>& adj,int src){
        
        visited[src] = true;
        
        
        for(int child : adj[src]){
            if(visited[child] == true && par[src] != child){
                flag = true;
                    return; 
            }
            if(visited[child] == false){
                
                par[child] = src;
                cycledfs(adj,child);
               
            }
        }
         
        
        
    }
    bool isCycle(vector<vector<int>>& adj) {
        // Code here
        memset(visited,false,sizeof(visited));
        flag = false;
        memset(par,-1,sizeof(par));
        for(int i = 0 ; i <adj.size();i++){
            for(int src : adj[i]){
                if(visited[src] == false)
                    cycledfs(adj,src);
            }
        }
        return flag;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj(V);
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends