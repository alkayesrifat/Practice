/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-13   14:58:56
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;
        string t;
        cin >> t;

        if (s == t || s[0] == '1')
        {
            cout << "YES" << endl;
            continue;
        }

        int paici = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                paici = 1;
            }
            if (s[i] != t[i])
            {
                if (paici == 0)
                {
                    cout << "NO" << endl;
                    break;
                }
            }
        }
        if (paici != 0)
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}