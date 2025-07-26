/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 26/07/2025 (Saturday)
 * Time       : 12:01
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

ll rsum(ll a, ll b)
{

    ll first = ((a - 1) * a) / 2;
    ll last = (b * (b + 1)) / 2;

    return (last - first);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll n, first;
        cin >> n >> first;

        ll last = first + (n - 1);

        auto ok = [&](ll mid)
        {
            for (ll i = first; i <= last; i++)
            {
                ll fi = rsum(first, i);
                ll la = rsum(i, last);

                ll subb = fi - la;

                if (subb == mid)
                {
                    return true;
                }
            }
            return false;
        };

        ll l = 1, r = 1e18, ans, mid;

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

        cout << ans << endl;
    }

    return 0;
}