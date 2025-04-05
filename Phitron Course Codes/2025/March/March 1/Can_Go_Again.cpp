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
int dis[10000];
int n, e;
vector<Edge> edj_list;
bool cycle = false;
void bellman()
{

    for (int i = 0; i < n - 1; i++)
    {
        for (auto ed : edj_list)
        {
            int a, b, c;
            a = ed.a;
            b = ed.b;
            c = ed.c;
            if (dis[a] != INT_MAX && dis[a] + c < dis[b])
                dis[b] = dis[a] + c;
        }
    }

    for (auto ed : edj_list)
    {
        int a, b, c;
        a = ed.a;
        b = ed.b;
        c = ed.c;
        if (dis[a] != INT_MAX && dis[a] + c < dis[b])
        {
            cycle = true;
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
        edj_list.push_back(Edge(a, b, c));
    }

    for (int i = 0; i < n; i++)
        dis[i] = INT_MAX;
    int src;
    cin >> src;
    dis[src] = 0;

    bellman();

    int test;
    cin >> test;
    vector<int> t;

    while (test--)
    {
        int d;
        cin >> d;
        t.push_back(d);
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        for (auto d : t)
        {
            if ( d > n || d < 0|| dis[d] == INT_MAX )
            {
                cout << "Not Possible" << endl;
            }
            else 
            {
                cout << dis[d] << endl;
            }
            
            
        }
    }

    return 0;
}