/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/07/2025 (Tuesday)
 * Time       : 10:13
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
        ull n, x;
        cin >> n >> x;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        auto ok = [&](ll h)
        {
            ull sum = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] < h)
                {
                    ll khali = h - v[i];
                    sum += khali;
                }
            }

            // cout << h << " " << sum << endl;
            return sum <= x;
        };

        ll l = 1, r = 1e18, mid, ans;

        while (l <= r)
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

        cout << ans << endl;
    }

    return 0;
}