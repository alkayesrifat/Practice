#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1000];
bool visited[1000];

void bfs(int source)
{

    queue<int> q;
    q.push(source);
    visited[source] = true;

    while (q.empty() == false)
    {
        int t = q.front();
        q.pop();

        for (int x : adj_list[t])
        {
            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    while (e--)
    {
        int a, b;
        cin >> a >> b;

        adj_list[b].push_back(a);
        adj_list[a].push_back(b);
    }

    memset(visited, false, sizeof(visited));

    int src;
    cin >> src;
    int dest;
    cin >> dest;

    bfs(src);
    if (visited[dest])
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}