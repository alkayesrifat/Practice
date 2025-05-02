/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-26   15:06:42
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    long long int k;
    cin >> k;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int sum = 0;
    int ans = 0;

    int l = 0, r = 0;

    while (r < n)
    {
        sum = sum + a[r];
        if (sum <= k)
        {
            int re = r - l + 1;
            ans = max(ans, re);
        }
        else
        {

            sum = sum - a[l];
            l++;
        }

        r++;
    }

    cout << ans << endl;

    return 0;
}