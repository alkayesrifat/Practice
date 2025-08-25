/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-17   10:01:01
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
        int n, m;
        cin >> n >> m;

        if ((n % 2 == 0 && m % 2 != 0) || n > m)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            int an = m / n;

            for (int i = 0; i < n; i++)
            {
                cout << an << " ";
            }
            cout << endl;
        }
    }

    return 0;
}