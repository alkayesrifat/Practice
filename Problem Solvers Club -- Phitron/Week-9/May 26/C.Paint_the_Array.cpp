/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-26   05:27:14
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        long long int g1 = 0;
        long long int g2 = 0;

        for (int i = 0; i < n; i += 2)
        {
            g1 = __gcd(g1, v[i]);
        }

        int flag1 = 1;

        for (int i = 1; i < n; i += 2)
        {
            if (v[i] % g1 == 0)
            {
                flag1 = 0;
                break;
            }
        }

        if (flag1)
        {
            cout << g1 << endl;
        }
        else
        {

            for (int i = 1; i < n; i += 2)
            {
                g2 = __gcd(g2, v[i]);
            }
            int flag2 = 1;

            for (int i = 0; i < n; i += 2)
            {
                if (v[i] % g2 == 0)
                {
                    flag2 = 0;
                    break;
                }
            }
            if (flag2)
            {
                cout << g2 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
    }

    return 0;
}