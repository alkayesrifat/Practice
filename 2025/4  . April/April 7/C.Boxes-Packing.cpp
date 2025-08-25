/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-08   15:46:23
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/903/C
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<int, int> mp;

    int maxx = -1;

    for (int i = 0; i < n; i++)
    {
        int n;
        cin >> n;

        mp[n]++;
    }

   

    for (auto [i, v] : mp)
    {

        if (v > maxx)
        {
            maxx = v;
        }
    }
    cout << maxx;

    return 0;
}
