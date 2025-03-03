// Problem Link :: https://codeforces.com/problemset/problem/25/D

#include <bits/stdc++.h>
using namespace std;

int lider[1005];
int sizeofdsu[1005];
int findthelider(int node)
{
    if (lider[node] == -1)
    {
        return node;
    }
    int l = findthelider(lider[node]);
    lider[node] = l;
    return l;
}

void dsu(int node1, int node2)
{
    int lider1 = findthelider(node1);
    int lider2 = findthelider(node2);

    if (sizeofdsu[lider1] >= sizeofdsu[lider2])
    {

        lider[lider2] = lider1;

        sizeofdsu[lider1] = sizeofdsu[lider1] + sizeofdsu[lider2];
    }
    else
    {

        lider[lider1] = lider2;

        sizeofdsu[lider2] = sizeofdsu[lider1] + sizeofdsu[lider2];
    }
}

int main()
{

    int n;
    cin >> n;
    int e = n - 1;

    for (int i = 1; i <= n; i++)
    {
        lider[i] = -1;
        sizeofdsu[i] = 1;
    }

    vector<pair<int, int>> rmv;
    vector<pair<int, int>> build;

    while (e--)
    {
        int a, b;
        cin >> a >> b;
        int la = findthelider(a);
        int lb = findthelider(b);
        if (la == lb)
        {
            rmv.push_back({a, b});
        }
        else
        {
            dsu(a, b);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int l1 = findthelider(1);
        int l2 = findthelider(i);
        if (l1 != l2)
        {
            dsu(1, i);
            build.push_back({1, i});
        }
    }

    cout << rmv.size() << endl;

    for (int i = 0; i < rmv.size(); i++)
    {
        cout << rmv[i].first << " " << rmv[i].second << " " << build[i].first << " " << build[i].second << endl;
    }

    return 0;
}