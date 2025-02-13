#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
bool visited[100];
bool cycle;
int parent[100];
void bfs(int src)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (q.empty() == false)
    {
        int p = q.front();
        q.pop();
        for (int x : adj_list[p])
        {
            if (visited[x] == true && parent[p] != x)
            {
                cycle = true;
            }
            
            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
                parent[x] = p;
            }
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
            bfs(i);
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