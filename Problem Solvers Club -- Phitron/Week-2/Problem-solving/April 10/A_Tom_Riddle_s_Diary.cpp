/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-10   09:05:32
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/855/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    map<string, int> mp;

    while (testcase--)
    {
        string s;
        cin >> s;

        if (mp[s] == 0)
        {
            cout << "NO" << "\n";
            mp[s]++;
        }
        else
        {
            cout << "YES" << "\n";
        }
    }

    return 0;
}