// Problem Link : https://cses.fi/problemset/task/1676/
#include <bits/stdc++.h>
using namespace std;

int lider[100000 + 5];
int sizeofdsu[100000 + 5];

int countt;

int findthelider(int node)
{
    if (lider[node] == -1)
    {
        return node;
    }
    int t = findthelider(lider[node]);

    lider[node] = t;

    return t;
}

void dsu(int node1, int node2)
{
    int lider1 = findthelider(node1);
    int lider2 = findthelider(node2);

    if (sizeofdsu[lider1] >= sizeofdsu[lider2])
    {
        // ekhane lider 1 hoitace gia boro

        lider[lider2] = lider1;

        sizeofdsu[lider1] = sizeofdsu[lider1] + sizeofdsu[lider2];
        countt = max(countt, sizeofdsu[lider1]);
    }
    else
    {
        // ekhane lider  2 hoitace gia boro

        lider[lider1] = lider2;

        sizeofdsu[lider2] = sizeofdsu[lider1] + sizeofdsu[lider2];
        countt = max(countt, sizeofdsu[lider2]);
    }
}

int main()
{

    int n, e;
    cin >> n >> e;

    for (int i = 1; i <= n; i++)
    {
        lider[i] = -1;
        sizeofdsu[i] = 1;
    }
    int contections = n;

    countt = 1;
    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int para = findthelider(a);
        int parb = findthelider(b);

        if (para != parb)
        {

            dsu(a, b);
            contections--;
        }

        cout << contections << " " << countt << endl;
    }

    return 0;
}