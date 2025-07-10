/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-04   19:43:34
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
        if (n % 2 != 0 || n < 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            string s = "AAA";

            int koybar = n / 2;

            while (koybar--)
            {
                cout << s << 'B';
            }

            cout << endl;
        }
    }

    return 0;
}