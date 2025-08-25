/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-03   19:11:11
 * ---------------------
 * Problem Link:
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

        vector<long long int> psum(n);

        psum[0] = v[0];

        for (int i = 1; i < n; i++)
        {
            psum[i] = psum[i - 1] + v[i];
        }

        string s;
        cin >> s;

        long long int sum = 0;

        int l = 0, r = n - 1;

        // for (int i = 0; i < n; i++)
        // {
        //     cout << psum[i] << " ";
        // }
        // cout << endl;

        while (l < r)
        {

            if (s[l] == 'L' && s[r] == 'R')
            {
                // cout << l << " " << r << endl;
                // for (int i = l; i <= r; i++)
                //     sum += v[i];

                if (l != 0)
                {
                    sum = sum + (psum[r] - psum[l - 1]);
                }
                else
                {
                    sum = sum + (psum[r]);
                }

                l++;
                r--;
            }

            else if (s[l] == 'L' && s[r] == 'L')
            {
                r--;
            }
            else if (s[l] == 'R' && s[r] == 'R')
            {
                l++;
            }
            else
            {
                l++;
                r--;
            }
        }
        cout << sum << endl;
    }

    return 0;
}