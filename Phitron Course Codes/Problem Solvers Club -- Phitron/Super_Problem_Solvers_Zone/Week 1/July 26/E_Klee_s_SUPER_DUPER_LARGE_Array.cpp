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

        ll l = first, r = last, ans = LLONG_MAX, mid;

        while (l <= r)
        {
            mid = l + (r - l) / 2;

            ll ls = rsum(first, mid);
            ll rs = rsum(mid + 1, last);

            ll difa = abs(rs - ls);

            ans = min(ans, difa);

            if (ls < rs)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}

