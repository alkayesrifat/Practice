/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-28   19:00:38
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> v;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            sum += val;
            v.push_back(val);
        }

        if (sum < s)
        {
            cout << -1 << endl;
        }
        else
        {
            int l = 0, r = 0;

            int cs = 0;
            int ans = 0;
            while (r < n)
            {
                cs = cs + v[r];

                if (cs == s)
                {
                    ans = max(ans, r - l + 1);
                }
                else
                {
                    while (cs > s)
                    {
                        cs -= v[l];
                        l++;
                    }
                    if (cs == s)
                    {
                        ans = max(ans, r - l + 1);
                    }
                }

                r++;
            }
            cout << n - ans << endl;
        }
    }

    return 0;
}