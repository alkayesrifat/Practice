/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 08:07
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, t;
    cin >> n >> t;

    vector<int> v(n);
    vector<long long int> pref(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i == 0)
            pref[i] = v[i];
        else
        {
            pref[i] = pref[i - 1] + v[i];
        }
    }
    // long long sum = 0 ;int cnt = 0 ;

    int maxx = INT_MIN;
    long long sum = 0;

    int l = 0;
    int r = 0;

    while (r < n)
    {
        sum = sum + v[r];

        while (sum > t)
        {
            sum = sum - v[l];
            l++;
        }
        maxx = max(maxx, (r - l + 1));
        r++;
    }
    cout << maxx;

    return 0;
}