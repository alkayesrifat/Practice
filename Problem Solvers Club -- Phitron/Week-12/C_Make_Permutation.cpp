/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/06/2025 (Sunday)
 * Time       : 19:34
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

        vector<int> v(n);
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        sort(v.begin(), v.end());

        int flag = 0;

        for (int i = 0; i < n; i++)
        {
            if (v[i] > (i + 1))
            {
                // int paici = 0;
                // for (int j = 0; j < n; j++)
                // {
                //     if (v[j] < (i + 1))
                //     {
                //         if (mp[v[j]] >= 2)
                //         {
                //             paici = 1;
                //             mp[v[j]]--;
                //             mp[(i + 1)]++;
                //         }
                //     }
                // }

                // if (paici == 0)
                flag = 1;
            }
        }

        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}