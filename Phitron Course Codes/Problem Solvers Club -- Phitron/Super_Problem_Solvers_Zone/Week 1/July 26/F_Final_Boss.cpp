/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 26/07/2025 (Saturday)
 * Time       : 10:16
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

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int h, n;
        cin >> h >> n;

        vector<ll> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<ll> c(n);
        for (int i = 0; i < n; i++)
            cin >> c[i];

        auto ok = [&](ll mid)
        {
            ll sum = 0;

            for (int i = 0; i < n; i++)
            {
                sum += a[i];
            }
            if (sum >= h)
                return true;

            mid = mid - 1;

            for (int i = 0; i < n; i++)
            {
                ull crr = mid / c[i];
                ull crrsum =  crr *  a[i];

                sum += crrsum;
            }

            return sum >= h;
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