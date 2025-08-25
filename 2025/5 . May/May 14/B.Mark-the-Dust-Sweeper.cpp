/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-14   12:15:25
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
        long long int koyta = 0;
        long long int sum = 0;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int p = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > 0)
            {
                p = 1;
            }

            if (p == 1)
            {
                if (v[i] == 0)
                {
                    koyta++;
                }
                else
                {
                    sum = sum + v[i];
                }
            }
        }

        long long int ans = sum + koyta;
        cout << ans << endl;
    }

    return 0;
}
