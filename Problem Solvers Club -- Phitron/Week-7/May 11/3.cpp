/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-12   20:38:04
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

        int zero = 0;
        int one = 0;

        while (n--)
        {
            int val;
            cin >> val;
            if (val == 0)
            {
                zero++;
            }
            else
            {
                one++;
            }
        }

        if (zero == 0 || one == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = min(zero, one);
            cout << ans << endl;
        }
    }

    return 0;
}