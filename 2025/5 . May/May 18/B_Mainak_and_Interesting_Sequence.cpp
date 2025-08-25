/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-18   09:25:57
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
        long long n, m;
        cin >> n >> m;

        if ((n % 2 == 0 && m % 2 != 0) || (n > m))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;

            if ((n % 2 != 0 && m % 2 != 0) || (n % 2 != 0 && m % 2 == 0))
            {
                for (int i = 1; i < n; i++)
                {
                    cout << 1 << " ";
                }
                cout << m - (n - 1) << '\n';
            }
            else if (n % 2 == 0 && m % 2 == 0)
            {
                for (int i = 1; i < n - 1; i++)
                {
                    cout << 1 << " ";
                }
                long long val = m - (n - 2);
                cout << val / 2 << " " << val / 2 << '\n';
            }
        }
    }
    return 0;
}