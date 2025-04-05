#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[100];
bool visited[100];
bool cycle;
int parenta[100];
void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited[src] = true;

    while (q.empty() == false)
    {
        int parent = q.front();
        q.pop();

        for (auto x : adj_list[parent])
        {
            if (visited[x]== true && parenta[parent] != x)
            {
                cycle = true;
            }

            if (visited[x] == false)
            {
                q.push(x);
                visited[x] = true;
                parenta[x] = parent;
            }
        }
    }
}

int main()
{

    int n, e;
    cin >> n >> e;
    memset(visited, false, sizeof(visited));
    memset(parenta,-1,sizeof(parenta));
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
    if (cycle )
    {
        cout << "cycle dicatedted";
    }
    else
    {
        cout << " NO cycle , i love you , etai bastob , hahahahha, ";
    }

    return 0;
}