#include <bits/stdc++.h>
using namespace std;
int n, e;
vector<int> adj_list[100];
bool visited[100];

bool pathvis[100];
bool cy;
void dfs(int src)
{

    visited[src] = true;
    pathvis[src] = true;

    for (auto child : adj_list[src])
    {
        if (visited[child] && pathvis[true])
        {
            cy = true;
        }
        if (visited[child] == false)
        {
            dfs(child);
        }
    }
    pathvis[src] = false;
}

int main()
{

    cin >> n >> e;
    memset(visited, false, sizeof(visited));
    memset(pathvis, false, sizeof(pathvis));
    cy = false;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        adj_list[a].push_back(b);
    }

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == false)
        {
            dfs(i);
        }
    }

    if (cy)
    {
        cout << "Cycle detected" << endl;
    }
    else
    {
        cout << "No cycle detected" << endl;
    }

    return 0;
}
