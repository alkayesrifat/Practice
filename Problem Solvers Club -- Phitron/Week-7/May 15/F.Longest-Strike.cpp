/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-15   05:55:50
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
        int n, k;
        cin >> n >> k;

        map<int, int> mp;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        vector<int> most;

        for (auto [a, b] : mp)
        {
            if (b >= k)
            {
                most.push_back(a);
            }
        }

        if (most.empty() == true)
        {
            cout << -1 << endl;
        }
        else
        {
            sort(most.begin(), most.end());
            int l = most.front();
            int r = most.front();

            int len = 1;
            int N = most.size();
            int maxlen = 1;

            for (int i = 1; i < N; i++)
            {
                if (most[i] - most[i - 1] == 1)
                {
                    len++;
                    if (len > maxlen)
                    {
                        r = most[i];
                        l = most[i - len + 1];
                        maxlen = len;
                    }
                }
                else
                {
                    len = 1;
                }
            }

            cout << l << " " << r << endl;
        }
    }

    return 0;
}