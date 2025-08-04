/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/07/2025 (Tuesday)
 * Time       : 04:25
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

    int n;
    cin >> n;
    ll sum = 0;

    vector<int> v(n);
    int odd = 0;
    int even = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
        sum += v[i];
    }

    if (abs(odd - even) == 1 || abs(odd - even) == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        sort(v.rbegin(), v.rend());

        int nimu = min(odd, even);
        ll crrsum = 0;

        if (odd == nimu)
        {
            int c = nimu;

            for (int i = 0; i < n; i++)
            {
                if (c == 0)
                    break;
                if (v[i] % 2 != 0)
                {

                    crrsum += v[i];
                    c--;
                }
            }
            c = nimu + 1;
            for (int i = 0; i < n; i++)
            {
                if (c == 0)
                    break;
                if (v[i] % 2 == 0)
                {

                    crrsum += v[i];
                    c--;
                }
            }
            cout << sum - crrsum;
        }
        else
        {
            int c = nimu;

            for (int i = 0; i < n; i++)
            {
                if (c == 0)
                    break;
                if (v[i] % 2 == 0)
                {

                    crrsum += v[i];
                    c--;
                }
            }
            c = nimu + 1;
            for (int i = 0; i < n; i++)
            {
                if (c == 0)
                    break;
                if (v[i] % 2 != 0)
                {

                    crrsum += v[i];
                    c--;
                }
            }
            cout << sum - crrsum;
        }
    }

    return 0;
}