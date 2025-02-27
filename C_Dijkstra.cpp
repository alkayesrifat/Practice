#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> adj_list[100];
int dis[100];
void dikstra(int src)
{

    queue<pair<int, int>> par;
    par.push({src, 0});
    dis[src] = 0;

    while (par.empty() == false)
    {
        pair<int, int> parent = par.front();
        par.pop();
        for (auto child : adj_list[parent.first])
        {
            if (parent.second + child.second < dis[child.first])
            {
                dis[child.first] = parent.second + child.second;
                par.push({child.first, dis[child.first]});
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
        int a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }

    dikstra(1);

    for (int i = 1; i <= n; i++)
    {
        cout << "Node " << i << " : " << dis[i] << endl;
    }

    return 0;
}