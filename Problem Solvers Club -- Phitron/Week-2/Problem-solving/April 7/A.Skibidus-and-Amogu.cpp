/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-07   21:00:23
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/2065/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    while (n--)
    {

        string s;
        cin >> s;

        vector<char> v;

        for (int i = 0; i < s.size() - 2; i++)
        {
            cout << s[i];
        }
        cout << 'i';
        cout << endl;
    }

    return 0;
}