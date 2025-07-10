/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-09   11:30:52
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/637/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<string> st;
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    reverse(v.begin(), v.end());

    map<string, int> mp;

    for (auto a : v)
    {
        if (mp[a] == 0)
        {
            cout << a << endl;
            mp[a]++;
        }
    }

    return 0;
}