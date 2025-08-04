/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 20:25 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    while (test_case--) {
        ll n, x;
        cin >> n >> x;

        vector<ll> v(n);

        for (ll i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.rbegin(), v.rend());

        
        ll ans = v[0];

        for (int i = 1; i < n; i++)
        {
            ll crrsum = 1LL * x * i;
            ll crrans = crrsum + v[i];

            ans = max(ans,crrans);
        }
        

        cout << ans << endl;
    }

    return 0;
}
