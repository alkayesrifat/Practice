/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-02   19:53:12
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
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long int cnt = 0;
        long long int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] <= q)
            {
                cnt++;
            }
            else
            {
                cnt = 0;
            }

            if (cnt >= k)
            {
                ans = (cnt - k + 1) + ans;
            }
        }
        cout << ans << endl;
    }

    return 0;
}