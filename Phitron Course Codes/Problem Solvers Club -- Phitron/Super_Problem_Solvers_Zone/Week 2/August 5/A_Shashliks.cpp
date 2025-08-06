/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 19:30
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
        int k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        if (x > y)
        {

            swap(x, y);
            swap(a, b);
        }

        ll diff = k - a;
        ll ans = 0;
        if (diff >= 0)
        {
            ans = diff / x + 1;
            k -= x * ans;
        }

        diff = k - b;
        if (diff >= 0)
            ans += diff / y + 1;

        cout << ans << endl;
    }

    return 0;
}