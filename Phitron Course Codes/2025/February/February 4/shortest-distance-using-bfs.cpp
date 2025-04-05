#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool visited[1000];
int level[1000];

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited[src] = true;
    level[src] = 0;
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
                level[x] = level[t] +1;
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
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    memset(visited,false,sizeof(visited));
    memset(level,-1,sizeof(level));
    int a , b;
    cin >> a >> b;
    bfs(a);
    cout << level[b];

    return 0;
}