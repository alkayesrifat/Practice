/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-26   06:08:32
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
long long LCM(long long a, long long b)
{
    return (a / __gcd(a, b)) * b;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, a, b, p, q;

    cin >> n >> a >> b >> p >> q;

    long long int aa = (n / a);
    long long int bb = (n / b);
    long long overlap = (n / LCM(a, b));

    // cout << aa << " " << bb << " " << overlap << endl;

    long long x = (aa * p);
    long long y = (bb * q);

    long long int ans = ((x + y) - (overlap * (p + q))) + (overlap * max(p, q));

    cout << ans << endl;

    return 0;
}