/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-02   11:15:24
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        multiset<int> m;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            m.insert(val);
        }

        int minn = *m.begin();
        int maxx = *m.rbegin();

        int ans = maxx - minn;
        cout << ans * (n - 1) << endl;
    }

    return 0;
}