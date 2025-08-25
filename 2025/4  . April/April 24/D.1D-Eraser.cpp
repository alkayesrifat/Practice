/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-24   15:10:06
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
        int k;
        cin >> n >> k;

        string s;
        cin >> s;
        // cout << s;

        int l = 0;
        int cnt = 0;

        while (l < n)
        {
            if (s[l] == 'B')
            {
                cnt++;
                l = l + k;
            }
            else
            {
                l++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}