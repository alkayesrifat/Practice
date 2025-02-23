#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int a, b, c;
    Edge(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

vector<Edge> edje_list;
int n, e;

int dis[100];
bool flag = false;

void bellman_ford()
{

    for (int i = 0; i < n - 1; i++)
    {
        for (auto ad : edje_list)
        {
            int a = ad.a;
            int b = ad.b;
            int c = ad.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
            {
                dis[b] = dis[a] + c;
            }
        }
    }
    for (auto ad : edje_list)
    {
        int a = ad.a;
        int b = ad.b;
        int c = ad.c;
        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            flag = true;
            break;
        }
    }
}

int main()
{

    cin >> n >> e;

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        edje_list.push_back({a, b, c});
    }

    for (int i = 0; i < n; i++)
    {
        dis[i] = INT_MAX;
    }
    dis[0] = 0;

    bellman_ford();

    if (flag)
    {
        cout << "There is a black sopt in the Map" << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << dis[i] << endl;
        }
    }

    return 0;
}