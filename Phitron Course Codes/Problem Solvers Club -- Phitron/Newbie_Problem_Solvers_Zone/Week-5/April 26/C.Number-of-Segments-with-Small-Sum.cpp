/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-26   15:48:16
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
    long long int k;
    cin >> n >> k;

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long int sum = 0;
    int l = 0, r = 0;

    long long int ans = 0;

    while (l < n && r < n)
    {
        sum = sum + arr[r];
        if (sum <= k)
        {
            ans = ans + (r - l + 1);
        }
        else
        {
            while (sum > k && l <= r)
            {
                sum = sum - arr[l];
                l++;
            }
            if (sum <= k)
            {
                ans = ans + (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}