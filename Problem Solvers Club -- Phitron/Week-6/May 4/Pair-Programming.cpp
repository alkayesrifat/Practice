/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-05   16:34:48
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
        int k, n, m;
        cin >> k >> n >> m;

        vector<int> mono(n);
        vector<int> poly(m);

        for (int i = 0; i < n; i++)
        {
            cin >> mono[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> poly[i];
        }

        bool flag = false;

        vector<int> ans;

        int l = 0, r = 0;
        while (r < n || l < m)
        {
            if (mono[r] <= k && mono[r] != 0 && r < n)
            {
                ans.push_back(mono[r]);
                r++;
            }
            else if (poly[l] <= k && poly[l] != 0 && l < m)
            {
                ans.push_back(poly[l]);
                l++;
            }
            else if (mono[r] == 0 && r < n)
            {
                ans.push_back(mono[r]);
                k++;
                r++;
            }
            else if (poly[l] == 0 && l < m)
            {
                ans.push_back(poly[l]);
                k++;
                l++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag == true)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}