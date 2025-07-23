/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/07/2025 (Thursday)
 * Time       : 19:26
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int t;
    cin >> t;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    auto ok = [&](long long second)
    {
        long long  cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (second / v[i]);
            if(cnt >= t) return true;
        }
        
        return false;
        
    };

    long long l = 1, r = 1e18, mid, ans;

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