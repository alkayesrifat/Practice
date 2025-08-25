// Link : https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1?utm_source=geeksforgeeks

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User Function Template
class Solution {
  public:
    int n;
    // Function to find the shortest distance of all the vertices
    // from the source vertex src.
    vector<int>dis;
    
    void dijkstraa(vector<vector<pair<int, int>>> &adj,int src){
        
        priority_queue<pair<int, int>,vector<pair<int, int>>,greater<pair<int, int>>> pq;
        pq.push({0,src});
        dis[src] = 0;
        while(pq.empty() == false){
            pair<int, int> parent = pq.top();
            pq.pop();
            for(auto child : adj[parent.second]){
                if(parent.first + child.second < dis[child.first]){
                    dis[child.first] = parent.first + child.second;
                    pq.push({dis[child.first],child.first});
                }
            }
        }
        
    }
    
    vector<int> dijkstra(vector<vector<pair<int, int>>> &adj, int src) {
        
        n = adj.size();
        dis.resize(n, INT_MAX);
        
        dijkstraa(adj,src);
        return dis;
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<pair<int, int>>> adj(V);
        int i = 0;
        while (i++ < E) {
            int u, v, w;
            cin >> u >> v >> w;
            pair<int, int> t1 = {v, w}, t2 = {u, w};
            adj[u].push_back(t1);
            adj[v].push_back(t2);
        }
        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.dijkstra(adj, src);

        for (int i = 0; i < V; i++)
            cout << res[i] << " ";
        cout << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}
// } Driver Code Ends