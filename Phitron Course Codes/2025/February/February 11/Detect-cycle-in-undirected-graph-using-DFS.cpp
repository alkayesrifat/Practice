#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
bool visited[100];

bool cycle;
int parent[100];
void dfs(int src)
{
    visited[src] = true;

    for (int c : adj_list[src])
    {
        if (visited[c] == true && parent[src] != c)
        {
            cycle = true;
        }
        
        if (visited[c] == false)
        {
            dfs(c);
            parent[c] = src;
        }
        
    }
    
    

    
}

int main()
{

    memset(visited, false, sizeof(visited));
    memset(parent,-1,sizeof(parent));

    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
      
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    cycle = false;
    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
        }
        
    }
    if (cycle)
    {
        cout << "cycle detected";
    }
    else
    {
        cout << "NO cycle";
    }

    return 0;
}