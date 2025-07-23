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

    ll k, n;
    cin >> k >> n;

    vector<ll>v(n);


    for (int i = 0; i < n; i++)
    {
        cin >> v[i];

    }

    ll l = 0, r = 1e18, mid, ans;

    auto ok = [&](ll mid)
    {
        ll sum = 0 ;

        for(auto x : v){
            sum += min(mid,x);
        }

        ll ab = sum / mid;

        return ab >= k;

        
    };

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        ll crr = mid * k;
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