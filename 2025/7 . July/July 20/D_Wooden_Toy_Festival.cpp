/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/07/2025 (Sunday)
 * Time       : 19:44
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        
        auto ok = [&](int mid)
        {
            int cnt = 1, l = 0;
            
            for (int i = 0; i < n; i++)
            {
                if ((v[i] - v[l] > 2 * mid))
                {
                    cnt++;
                    l = i;
                }
            }
            
            return cnt <= 3;
        };
        int l = 0, r = 1e9, mid, ans;

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