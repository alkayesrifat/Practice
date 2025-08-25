/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-10   16:17:15
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/4/C
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, int> mp;

    while (n--)
    {
        string s;
        cin >> s;
        if (mp[s] == 0)
        {
            cout << "OK" << "\n";
            mp[s]++;
        }
        else
        {
            cout << s << mp[s] << "\n";
            mp[s]++;
        }
    }

    return 0;
}