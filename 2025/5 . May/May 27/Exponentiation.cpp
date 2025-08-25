/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   10:22:24
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

long long int MOD = 1e9 + 7;

int power(int x, int n)
{

    int ans = 1 % MOD;
    while (n)
    {

        if (n & 1)
        {
            ans = (1LL * ans % MOD * x % MOD) % MOD;
        }

        x = 1LL * x * x % MOD;
        n = n / 2;
    }

    return ans;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        cout << power(a, b) << endl;
        ;
    }

    return 0;
}