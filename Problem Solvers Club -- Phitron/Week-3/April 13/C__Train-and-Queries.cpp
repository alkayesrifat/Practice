/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-13   14:57:46
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        int q;
        cin >> n >> q;

        vector<int> v(n + 1);

        map<int, set<int>> mp;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            mp[v[i]].insert(i);
        }

        while (q--)
        {
            int a, b;
            cin >> a >> b;

            if (mp.find(a) == mp.end() || mp.find(b) == mp.end())
            {
                cout << "NO" << endl;
            }
            else
            {
                int startind = *mp[a].begin();
                int endind = *mp[b].rbegin();

                if (startind < endind)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
    }

    return 0;
}