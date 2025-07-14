/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 21:17
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
       
      
        long long int minn = INT_MAX;
        vector<long long int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            minn = min(v[i], minn);
             
        }

        if (v[0] == minn || v[n - 1] == minn)
        {
            cout << minn << endl;
        }
        else
        {
            long long int first = v[0];
            long long int last = v[n - 1];

            long long int ans = INT_MAX;

            for (int i = 0; i < n - 1; i++)
            {
                long long crr = v[i] + v[i + 1];
                ans = min(ans, crr);
            }

            ans = min(first, ans);
            ans = min(last, ans);

            cout << ans << endl;
        }
    }

    return 0;
}