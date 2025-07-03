/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/06/2025 (Sunday)
 * Time       : 16:24
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

        vector<string> v(n);
        vector<int> s(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            // cout << v[i] << endl;
            int cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (v[i][j] == '1')
                {
                    cnt++;
                }
            }
            s[i] = cnt;
        }

        int minn = INT_MAX;
        int maxx = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            if (s[i] != 0)
            {
                minn = min(minn, s[i]);
                maxx = max(maxx, s[i]);
            }
        }

        if (minn != maxx)
        {
            cout << "TRIANGLE" << endl;
        }
        else
        {
            cout << "SQUARE" << endl;
        }
    }

    return 0;
}