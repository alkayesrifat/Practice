/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   19:10:43
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

bool kth_bit_on(long long n, int k)
{
    return ((n >> k) & 1);
}

long long turn_on_kth_bit(long long n, int k)
{
    return (n | (1LL << k));
}

long long turn_off_kth_bit(long long n, int k)
{
    return (n & (~(1LL << k)));
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        long long int b, c, d;
        cin >> b >> c >> d;

        long long int a = b;

        int maxbit = max({__lg(b), __lg(c), __lg(d)});

        for (int i = 0; i <= maxbit; i++)
        {
            if (!kth_bit_on(a, i) && kth_bit_on(d, i))
            {
                a = turn_on_kth_bit(a, i);
            }
            if (kth_bit_on(d, i) && kth_bit_on(c, i))
            {
                a = turn_off_kth_bit(a, i);
            }
        }

        long long int r = (a | b) - (a & c);

        if (r == d)
        {
            cout << a << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}