/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-27   20:53:25
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, s;
    cin >> n >> s;

    vector<long long int> a(n);

    for (long long int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int ans = LONG_LONG_MAX;

    long long int l = 0, r = 0, sum = 0;

    while (r < n)
    {
        sum = sum + a[r];

        while (sum >= s)
        {
            ans = min(ans, r - l + 1);
            sum -= a[l];
            l++;
        }

        r++;
    }

    if (ans == LONG_LONG_MAX)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << ans << endl;
    }

    return 0;
}