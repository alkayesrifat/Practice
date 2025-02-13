#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
int dis[100];
void dijkstra(int src)
{
    queue<pair<int, int>> q;
    q.push({src, 0});
    dis[src] = 0;
    while (q.empty() == false)
    {
        pair<int, int> parent = q.front();
        q.pop();
        for (auto child : adj_list[parent.first])
        {
            if (child.second + parent.second < dis[child.first])
            {
                dis[child.first] = child.second + parent.second;
                q.push({child.first, dis[child.first]});
            }
        }
    }
}
int main()
{

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    dijkstra(0);
    for (int i = 0; i < n; i++)
    {
        cout << "Distance to node " << i << " is " << dis[i] << endl;
    }

    return 0;
}