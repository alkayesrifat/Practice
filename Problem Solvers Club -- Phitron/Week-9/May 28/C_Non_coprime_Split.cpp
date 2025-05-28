/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-28   19:25:10
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int div(int n)
{
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return n;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int l, r;
        cin >> l >> r;

        if (l <= 3 && r <= 3)
        {
            cout << -1 << endl;
            continue;
        }
        if (r - l >= 1)
        {
            if (r % 2)
                r--;
            cout << r / 2 << " " << r / 2 << endl;
            continue;
        }
        if (div(l) == l)
        {
            cout << -1 << endl;
            continue;
        }
        else
            cout << div(l) << " " << l - div(l) << endl;
    }

    return 0;
}