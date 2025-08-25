/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 21:17
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n, a, b;
    cin >> n >> a >> b;

    auto ok = [&](ll mid)
    {
        ll cnt = 1;

        if (mid < min(a, b))
        {
            return false;
        }

        mid = mid - min(a, b);

        cnt += mid / a;

        cnt += (mid / b);

        return cnt >= n;
    };

    ll l = 0, r = 2e10, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans;

    return 0;
}