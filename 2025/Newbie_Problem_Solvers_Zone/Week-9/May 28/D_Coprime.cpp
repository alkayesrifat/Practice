/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-28   10:53:24
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return true;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
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

        vector<long long int> v(n);
        int ff;
        cin >> ff;
        v[0] == ff;
        long long int full_gcd = v[0];

        for (long long int i = 1; i < n; i++)
        {
            cin >> v[i];
            full_gcd = __gcd(v[i], full_gcd);
        }

        int prime = 0;
        int flag = 1;

        if (full_gcd != 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (v[i] == 1)
                {
                    cout << (i + 1) + (i + 1) << endl;
                    break;
                }

                for (int j = i; j >= 0; j--)
                {
                    if (__gcd(v[i], v[j]) == 1)
                    {
                        cout << (i + 1) + (j + 1) << endl;
                        break;
                    }
                }
            }
        }
    }

    return 0;
}