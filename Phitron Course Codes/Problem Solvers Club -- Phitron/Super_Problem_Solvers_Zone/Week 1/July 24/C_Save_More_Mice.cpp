/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/07/2025 (Tuesday)
 * Time       : 11:53
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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        set<int> st;
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        auto ok = [&](ll mid)
        {
            int i = -1;
            int j = v.size() - 1;
            int cnt = 0;

            for (int t = v.size() - 1; t >= 0; t--)
            {
                int dic = n - v[t];
                if (i > j)
                {
                    break;
                }

                cnt++;
                j--;
                i += dic;
            }

            return cnt >= mid;
        };

        ll l = 0, r = 1e9, ans, mid;

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