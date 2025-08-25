/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 26/07/2025 (Saturday)
 * Time       : 15:24
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

ll something(ll k, ll l, ll r)
{
    return (r / k) - ((l - 1) / k);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll l, r;
        cin >> l >> r;

        ll cnt = 0;

        cnt += something(2, l, r);
        cnt += something(3, l, r);
        cnt += something(5, l, r);
        cnt += something(7, l, r);

        cnt -= something(6, l, r);
        cnt -= something(10, l, r);
        cnt -= something(14, l, r);
        cnt -= something(15, l, r);
        cnt -= something(21, l, r);
        cnt -= something(35, l, r);

        cnt += something(30, l, r);
        cnt += something(42, l, r);
        cnt += something(70, l, r);
        cnt += something(105, l, r);

        cnt -= something(210, l, r);

        cout << (r - l + 1) - cnt << "\n";
    }

    return 0;
}