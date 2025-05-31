/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-29   10:06:15
 * Portfolio  : alkayesrifat.netlify.app
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
        long long int n;
        cin >> n;
        long long int minn = LLONG_MAX;

        map<long long int, long long int> mp;

        vector<long long int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            minn = min(minn, v[i]);
        }

        if (mp[minn] > 1)
        {
            cout << "Yes" << endl;
        }
        else
        {
            bool flag = false;
            long long int gcdd = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] != minn && (v[i] % minn == 0))
                {
                    flag = true;
                    gcdd = __gcd(gcdd, v[i]);
                }
            }

            // cout << gcdd << endl;
            if (flag != true)
            {
                cout << "No" << endl;
            }

            else if (gcdd == minn)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}