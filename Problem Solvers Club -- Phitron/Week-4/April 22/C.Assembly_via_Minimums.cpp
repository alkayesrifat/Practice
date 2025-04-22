/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   11:56:49
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int m = (n * (n - 1)) / 2;
    vector<int> v(m);

    map<int, int> mp;

    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
    }
    
    

}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}