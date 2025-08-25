/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/08/2025 (Wednesday)
 * Time       : 14:53
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

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        vector<int> v(n);
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            maxx = max(v[i], maxx);
        }

        int gc = 0;
        int cnt = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (maxx == v[i])
                continue;
            int dif;
            if (v[i] < 0)
            {
                dif = abs(maxx - v[i]);
                cnt++;
            }
            else
            {
                dif = abs(maxx - v[i]);
                cnt++;
            }
            gc = __gcd(gc, dif);
        }
    }

    return 0;
}