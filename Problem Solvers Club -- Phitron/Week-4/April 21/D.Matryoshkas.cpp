/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-21   16:33:13
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    multiset<int> ml;

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        ml.insert(v);
    }

    int cnt = 0;
    int test = 2;

    while (ml.empty() == false)
    {
        auto cmin = ml.begin();

        while (cmin != ml.end())
        {
            auto f = ml.find(*cmin + 1);
            if (f != ml.end())
            {
                ml.erase(cmin);
                cmin = f;
            }
            else
            {
                ml.erase(cmin);
                cnt++;
                break;
            }
        }
    }

    cout << cnt << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}