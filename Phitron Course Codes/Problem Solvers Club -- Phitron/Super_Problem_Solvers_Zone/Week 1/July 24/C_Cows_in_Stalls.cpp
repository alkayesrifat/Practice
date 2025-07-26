/**
 * All Praise to Allah
 * ---------------------6 3
 2 5 7 11 15 20
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/07/2025 (Thursday)
 * Time       : 09:19
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

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
      
    }

    sort(v.begin(),v.end());

    auto ok = [&](ll mid)
    {
        int c = 0;
        

        int last = v[0];

        for (int i = 1; i < n; i++)
        {
            if ((v[i] - last) >= mid)
            {
                c++;
                last = v[i];
            }
        }

        if (c +1 >= k)
        {
            return true;
        }
        else
        {
            return false;
        }
    };

    ll l = 1, r = 1e18, ans, mid;

    while (l <= r)
    {
        mid = l + (r - l) / 2;

        

        if (ok(mid))
        {
            ans = mid;
            l = mid + 1 ;
        }
        else
        {
            r = mid - 1 ;
        }
    }
    cout << ans << endl;

    return 0;
}