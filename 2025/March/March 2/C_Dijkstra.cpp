#include <bits/stdc++.h>
using namespace std;
#define ll long long int

vector<pair<ll, ll>> adj_list[100005];
ll dis[100005];
ll parent[100005];

void dijkstra(int src)
{

    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (pq.empty() == false)
    {
        pair<ll, ll> p = pq.top();
        pq.pop();
        ll parnode = p.second;
        ll pardis = p.first;
        for (auto child : adj_list[parnode])
        {
            if (pardis + child.second < dis[child.first])
            {
                dis[child.first] = pardis + child.second;
                pq.push({dis[child.first], child.first});
                parent[child.first] = parnode;
            }
        }
    }
}

int main()
{

    ll n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        dis[i] = LLONG_MAX;
        parent[i] = -1;
    }

    while (e--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }
    dijkstra(1);
    if (dis[n] == LLONG_MAX)
    {
        cout << -1;
    }
    else
    {
        int node = n;
        stack<int> s;
        s.push(n);
    
        while (parent[node] != -1)
        {
            s.push(parent[node]);
            node = parent[node];
        }
    
        while (s.empty() == false)
        {
            cout << s.top() << ' ';
            s.pop();
        }
    
    }
    
    

    return 0;
}