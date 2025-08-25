/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   10:22:08
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    int c;
    cin >> n >> c;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;

        v[i] = val + i;
    }

    sort(v.begin(), v.end());

    int cnt = 0;

    long long int sum = 0;

    for (auto x : v)
    {
        sum = sum + x;
        if (sum > c)
        {
            break;
        }
        cnt++;
    }

    cout << cnt -  1 << endl ;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;


    //asdfds

    while (t--)
    {
        solve();
    }

    return 0;
}