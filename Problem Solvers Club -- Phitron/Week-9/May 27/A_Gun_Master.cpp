/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   20:06:10
 * Portfolio  : https://alkayesrifat.netlify.app/
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
        int n, d;
        cin >> n >> d;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;
        int crr = 1;

        for (int i = 0; i < n; i++)
        {
            if (crr == 2 && v[i] <= d)
            {
                cnt++;
                crr = 1;
            }
            if (crr == 1 && v[i] > d)
            {
                cnt++;
                crr = 2;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}