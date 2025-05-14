/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-14   10:18:17
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

        vector<int> v(n);

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        int flat = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] <= v[i + 1])
            {
                flat++;
            }
        }

        if (flat == n - 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            int cnt = 0;

            for (int i = 0; i < n - 1; i++)
            {
                if (v[i] > v[i + 1])
                {
                    cnt++;
                }
            }

            if (cnt > 1)
            {
                cout << "NO" << endl;
            }
            else
            {

                if (v[0] < v[n - 1])
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
            }
        }
    }

    return 0;
}