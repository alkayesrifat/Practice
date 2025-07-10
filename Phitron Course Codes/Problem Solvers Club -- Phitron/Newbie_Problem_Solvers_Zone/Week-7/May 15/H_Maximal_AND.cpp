/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-15   15:59:04
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

    int b = 30;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> bits(30 + 1);

        for (int i = 0; i < n; i++)
        {

            for (int j = b; j >= 0; j--)
            {
                if ((v[i] >> j) & 1)
                {
                    bits[j]++;
                }
            }
        }
        int ans = 0;
        for (int i = 30; i >= 0; i--)
        {
            if (bits[i] == n)
            {
                ans = ans + (1LL << i);
            }
            else
            {
                int need = n - bits[i];

                if (k >= need)
                {
                    ans = ans + (1LL << i);
                    k = k - need;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}