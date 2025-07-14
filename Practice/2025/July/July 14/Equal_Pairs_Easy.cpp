/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/07/2025 (Monday)
 * Time       : 11:41
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second > b.second;
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

        vector<int> v(n);
        map<int, int> mp;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] != 0)
            {
                mp[v[i]]++;
            }
            else
            {
                zero++;
            }
        }

        if (zero == 0)
        {
            int ans = 0;
            for (auto x : mp)
            {

                int crr = ((x.second - 1) * (x.second)) / 2;
                ans+=crr;
            }
            cout << ans << endl;
        }
        else
        {
            if (zero == v.size())
            {
                int crr = ((zero - 1) * (zero )) / 2;
                cout << crr << endl;
                continue;

            }

            vector<pair<int, int>> fr(mp.begin(), mp.end());

            sort(fr.begin(), fr.end(), cmp);

            int ans = 0;
            for (int i = 0; i < fr.size(); i++)
            {
                pair<int, int> x = fr[i];

                if (i == 0)
                {
                    x.second = x.second + zero;

                    int crr = ((x.second - 1) * (x.second)) / 2;
                    ans += crr;
                }
                else
                {
                    int crr = ((x.second - 1) * (x.second)) / 2;
                    ans += crr;
                }
            }
            cout << ans << endl;
        }
    }

    return 0;
}