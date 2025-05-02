/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-02   12:38:31
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

        map<char, int> mp;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != '?')
            {

                mp[s[i]]++;
            }
        }
        int sum = 0;

        for (auto [x, y] : mp)
        {

            if (y < n)
            {
                sum += y;
            }
            else
            {
                sum += n;
            }
        }
        cout << sum << endl;
    }

    return 0;
}