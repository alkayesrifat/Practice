#include <bits/stdc++.h>
using namespace std;
vector<int> adj_list[1000];
bool visited_or_not[1000];
int parent[1000];
int level[1000];

void bfs(int src)
{

    queue<int> q;
    q.push(src);
    visited_or_not[src] = true;
    level[src] = 0;

    while (q.empty() == false)
    {
        int front = q.front();
        q.pop();
        for (int x : adj_list[front])
        {
            if (visited_or_not[x] == false)
            {
                q.push(x);
                visited_or_not[x] = true;
                parent[x] = front;
                level[x] = level[front] + 1;
            }
        }
    }
}

int main()
{

    int node_number, edge_number;
    cin >> node_number >> edge_number;

    while (edge_number--)
    {
        int first, second;
        cin >> first >> second;
        adj_list[first].push_back(second);
        adj_list[second].push_back(first);
    }

    memset(visited_or_not, false, sizeof(visited_or_not));
    memset(parent, -1, sizeof(parent));
    memset(level, -1, sizeof(level));
    int start, finish;
    cin >> start >> finish;

    bfs(start);

    cout << level[finish];

    return 0;
}