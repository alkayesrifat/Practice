/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 20:26
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
        int m, p;
        cin >> m >> p;

        int cnt = 0;

        while (m < 298 && p <= 1000)
        {
            
            if ((p + (m + 1)) > 1000)
            {
                cnt--;
                break;
            }


            cnt++;
            p += 20;
            m++;

            
        }
        cout << cnt << endl;

        // int re = 1000 - p;

        // int dite = re / 20;

        // cout << dite << endl;
    }

    return 0;
}