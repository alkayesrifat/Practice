/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-04   08:35:23
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

        string s = "aeiou";
        int i = 0;
        string ans = "";
        while (n--)
        {
            ans.push_back(s[i]);

            if (n >= 0 && i == s.size() - 1)
            {
                i = 0;
            }
            else
            {
                i++;
            }
        }
        sort(ans.begin(), ans.end());
        cout << ans << endl;
    }

    return 0;
}