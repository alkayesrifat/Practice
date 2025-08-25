/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-18   08:54:14
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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int flag = 0;
        int x = 0;
        for (int i = 0; i < 256; i++)
        {
            long long int ans = 0;

            for (int j = 0; j < n; j++)
            {
                ans ^= (v[j] ^ i);
            }
            if (ans == 0)
            {

                flag = 1;
                x = i;

                break;
            }
        }
        if (flag == 1)
        {
            cout << x << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}