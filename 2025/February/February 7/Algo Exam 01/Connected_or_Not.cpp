#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];

int main()
{
    int n, e;
    cin >> n >> e;

    for (int i = 0; i < e; i++)
    {
        int u, v;
        cin >> u >> v;
        adj_list[u].push_back(v);
    }

    int q;
    cin >> q;

    while (q--)
    {
        int a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << "YES"<<endl; 
            continue;
        }

        bool found = false;
        for (int om : adj_list[a])
        {
            if (om == b)
            {
                cout << "YES"<<endl;
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO"<<endl;
    }

    return 0;
}
