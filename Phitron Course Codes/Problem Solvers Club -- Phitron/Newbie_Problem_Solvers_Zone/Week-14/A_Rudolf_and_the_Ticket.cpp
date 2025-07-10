/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/07/2025 (Tuesday)
 * Time       : 15:42
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
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a;
        vector<int> b;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val < k)
            {
                a.push_back(val);
            }
        }
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;

            if (val < k)
            {
                b.push_back(val);
            }
        }

        int cnt = 0 ;

        for (int i = 0; i < a.size(); i++)
        {
            for (int j = 0; j < b.size(); j++)
            {
                if (a[i] + b[j] <= k)
                {
                    cnt++;
                }
                
            }
            
        }

        cout << cnt << endl;
        



    }

    return 0;
}