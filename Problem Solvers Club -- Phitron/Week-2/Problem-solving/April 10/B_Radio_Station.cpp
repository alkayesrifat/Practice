/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-10   09:25:55
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/918/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    map<string, string> mp;

    while (n--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        s2.push_back(';');

        mp[s2] = s1;
    }

    while (m--)
    {
        string s1, s2;
        cin >> s1 >> s2;

        cout << s1 << " " << s2 << " " << "#" << mp[s2] << "\n";
    }

    // for (auto [s, x] : mp)
    // {
    //     cout << s << " " << x << endl;
    // }

    return 0;
}