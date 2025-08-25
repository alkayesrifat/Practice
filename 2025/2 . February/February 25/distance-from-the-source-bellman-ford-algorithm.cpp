// Problem Link : https://www.geeksforgeeks.org/problems/distance-from-the-source-bellman-ford-algorithm/1
// here the code

//{ Driver Code Starts
#include <cstdio> // for freopen
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    /*  Function to implement Bellman Ford
     *   edges: vector of vectors which represents the graph
     *   src: source vertex
     *   V: number of vertices
     */
    vector<int> bellmanFord(int V, vector<vector<int>> &edges, int src)
    {
        // Code here
        vector<int> dis(V);

        for (int i = 0; i < V; i++)
        {
            dis[i] = 100000000;
        }
        dis[src] = 0;

        for (int i = 0; i < V; i++)
        {
            for (auto cd : edges)
            {
                int a = cd[0];
                int b = cd[1];
                int c = cd[2];
                if (dis[a] != 100000000 && dis[a] + c < dis[b])
                {
                    dis[b] = dis[a] + c;
                }
            }
        }
        bool flag = false;
        for (auto cd : edges)
        {
            int a = cd[0];
            int b = cd[1];
            int c = cd[2];
            if (dis[a] != 100000000 && dis[a] + c < dis[b])
            {
                flag = true;
            }
        }
        vector<int> hahah;
        hahah.push_back(-1);
        if (flag)
            return hahah;
        else
            return dis;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int N, m;
        cin >> N >> m;

        vector<vector<int>> edges;

        for (int i = 0; i < m; ++i)
        {
            int u, v, w;
            cin >> u >> v >> w;

            vector<int> edge(3);
            edge[0] = u;
            edge[1] = v;
            edge[2] = w;
            edges.push_back(edge);
        }

        int src;
        cin >> src;
        cin.ignore();

        Solution obj;
        vector<int> res = obj.bellmanFord(N, edges, src);

        for (size_t i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends