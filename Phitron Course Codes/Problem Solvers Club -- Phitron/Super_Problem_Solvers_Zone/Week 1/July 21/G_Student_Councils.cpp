/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 15:22
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int k, n;
    cin >> k >> n;

    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        sum += val;
    }

    ll l = 1, r = 1e18, mid, ans;



    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll crr = mid * k;
        if (sum >= crr)
        {
            // cout << mid << " " << crr << " " << sum << endl ;
            
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << ans;

    return 0;
}