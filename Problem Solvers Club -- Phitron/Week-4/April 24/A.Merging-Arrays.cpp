/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-24   09:23:47
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    multiset<int> ans;

    while (n--)
    {
        int val;
        cin >> val;
        ans.insert(val);
    }

    while (m--)
    {
        int val;
        cin >> val;
        ans.insert(val);
    }

    for (auto x : ans)
    {
        cout << x << " ";
    }

    return 0;
}