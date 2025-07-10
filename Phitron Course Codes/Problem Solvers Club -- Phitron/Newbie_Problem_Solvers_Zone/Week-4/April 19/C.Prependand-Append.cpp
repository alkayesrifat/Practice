/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-19   11:15:15
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
        int ans = n;

        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {

            if (s[i] == s[j])
            {
                break;
            }
            else
            {
                ans -= 2;
            }
        }

        cout << ans << endl;
    }

    return 0;
}