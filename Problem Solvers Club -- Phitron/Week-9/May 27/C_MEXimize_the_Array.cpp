/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   20:20:53
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
        long long int n;
        cin >> n;

        vector<long long int> v(n);
        for (long long int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());

        long long int cnt = 0;

        for (long long int i = 0; i < n; i++)
        {
            if (i != v[i])
            {
                long long int temp = abs(i - v[i]);
                cnt = temp + cnt;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}