/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   20:37:38
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int x, y, k;
        cin >> x >> y >> k;
        long long ans = 0;

        ans = __gcd(x, y);
        long long int abc = (1LL * (ans % mod) + 1LL * (ans % mod)) % mod;
        cout << abc << endl;
    }

    return 0;
}