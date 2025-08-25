/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-02   19:38:08
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
        string s;
        cin >> s;

        if (s[0] == '1' && s[n - 1] == '1')
        {
            cout << "YES" << endl;
        }
        else
        {

            int one = 0;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    one++;
                }
            }

            int l = 0;

            int cnt = 0;

            while (l < n)
            {
                if (s[l] == '0')
                {
                    cnt++;
                    while (s[l] == '0' && l < n)
                    {
                        l++;
                    }
                }
                l++;
            }

            if (one > cnt)
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