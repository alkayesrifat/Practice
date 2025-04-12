/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-10   19:05:17
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1974/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        set<char> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        string ss;

        for (auto val : st)
        {
            ss.push_back(val);
        }

        sort(ss.begin(), ss.end());

        map<char, char> mp;

        for (int i = 0, j = ss.size() - 1; i <= j; i++, j--)
        {

            mp[ss[i]] = ss[j];
            mp[ss[j]] = ss[i];
        }

        for (int i = 0; i < n; i++)
        {
            cout << mp[s[i]];
        }

        // for (auto [x, y] : mp)
        // {
        //     cout << x << " -> " << y << endl;
        // }

        cout << "\n";
    }

    return 0;
}