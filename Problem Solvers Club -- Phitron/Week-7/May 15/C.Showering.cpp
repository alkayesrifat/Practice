/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-15   10:20:24
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
        int n, s, m;
        cin >> n >> s >> m;

        int flag = 0;
        int prev = 0;
        int l, r;

        while (n--)
        {

            cin >> l >> r;

            if ((l - prev) >= s)
            {
                flag = 1;
            }

            prev = r;
        }
        if (flag == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            if ((m - r) >= s)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}