/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 16:02
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long
#define endl "\n"
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    ll aa = 0, ba = 0, ca = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            aa++;
        }
        else if (s[i] == 'S')
        {
            ba++;
            /* code */
        }
        else
        {
            ca++;
        }
    }

    vector<ll> ace(3);

    for (ll i = 0; i < 3; i++)
    {
        cin >> ace[i];
    }

    vector<ll> dam(3);

    for (ll i = 0; i < 3; i++)
    {
        cin >> dam[i];
    }

    ll tk;
    cin >> tk;
    auto ok = [&](ull mid)
    {
        ll pos = 0;

        ull tkace = tk;
        vector<ull> v(3);

        v[0] = mid * aa;
        v[1] = mid * ba;
        v[2] = mid * ca;
        v[2] = mid * ca;

        for (ll i = 0; i < 3; i++)
        {
            if (v[i] > ace[i])
            {
                ll lakbo = (v[i] - ace[i]);
                ll damm = lakbo * dam[i];
                if (tkace >= damm)
                {
                    tkace -= damm;
                }
                else
                {
                    pos = 1;
                    break;
                }
            }
        }
        if (pos == 1)
            return false;
        else
            return true;
    };
    ull l = 0;
    ull r = 1e18, ans = 0, mid;

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

    cout << ans;
    return 0;
}  
