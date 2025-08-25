/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   14:39:25
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, t, q;
    cin >> n >> t >> q;

    vector<int> tech(t);

    for (int i = 0; i < t; i++)
    {
        cin >> tech[i];
    }

    sort(tech.begin(), tech.end());

    while (q--)
    {
        int d;
        cin >> d;
        if (d < tech[0])
        {
            cout << tech[0] - 1 << endl;
        }
        else if (d > tech[t - 1])
        {
            cout << n - tech[t - 1] << endl;
        }
        else
        {

            auto it = lower_bound(tech.begin(), tech.end(), d);

            auto jt = it;
            jt--;

            int left = *jt;
            int right = *it;

            int mid = (left + right) / 2;

            cout << min(abs(mid - left), abs(mid - right)) << endl;
        }
    }
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