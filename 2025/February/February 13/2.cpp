#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
int dis[100];


void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, src});
    dis[src] = 0;
    while (q.empty() == false)
    {
        pair<int, int> parent = q.top();
        q.pop();
        for (auto child : adj_list[parent.second])
        {
            // Corrected the indices and logic for updating distances
            if (parent.first + child.second < dis[child.first])
            {
                dis[child.first] = parent.first + child.second;
                q.push({dis[child.first], child.first});
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