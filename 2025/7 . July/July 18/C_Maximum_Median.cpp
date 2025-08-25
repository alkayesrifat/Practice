/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/07/2025 (Friday)
 * Time       : 09:23
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int> v(n);

    for(int i = 0 ; i < n ; i++)cin >> v[i];

    sort(v.begin(),v.end());

    auto ok = [&](ll m)
    {
        ll cnt = 0;

        for (int i = (n / 2); i < n; i++)
        {
            if (v[i] < m)
                cnt += (m - v[i]);
        }

        return cnt <= k;
    };

    ll l = 1, r = 2e9, mid, ans;

    while (l <= r )
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
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