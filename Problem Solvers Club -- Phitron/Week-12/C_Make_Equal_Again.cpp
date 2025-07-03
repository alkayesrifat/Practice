/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/06/2025 (Friday)
 * Time       : 10:20
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int suru = 0;
        int sprev = v[0];
        suru++;

        for (int i = 1; i < n; i++)
        {
            if (v[i] == sprev)
            {
                suru++;
            }
            else
            {
                break;
            }
        }
        int last = 0;
        int lprev = v[n - 1];
        last++;

        for (int i = n - 2; i >= 0; i--)
        {
            if (v[i] == lprev)
            {
                last++;
            }
            else
            {
                break;
            }
        }

        // cout << suru << " " << last << endl;

        if (sprev == lprev)
        {
            int c = suru + last;

            if (n - c < 0)
            {
                cout << 0 << endl;
            }

            else
            {
                cout << n - c << endl;
            }
        }
        else
        {
            int c = max(suru, last);

            if (n - c < 0)
            {
                cout << 0 << endl;
            }

            else
            {
                cout << n - c << endl;
            }
        }
    }

    return 0;
}