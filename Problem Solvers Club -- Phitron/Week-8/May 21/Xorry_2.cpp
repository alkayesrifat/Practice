/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   10:53:49
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

bool bit_on_or_off(int n, int k)
{
    return (n >> k) & 1;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int maxbit = __lg(n);

        int cnt = 0;

        int sum = (1LL << maxbit);

        // cout << sum << endl;

        for (int i = maxbit - 1; i >= 0; i--)
        {
            if (!bit_on_or_off(n, i))
            {
                if ((1LL << i) + sum <= n)
                {
                    cnt++;
                }
            }
        }
        // cout << endl;
        if (cnt == 0)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << (1LL << cnt) << endl;
        }
    }

    return 0;
}