/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-28   19:15:41
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

        vector<int> a(n);

        int ma = INT_MIN;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (i % 2 == 0)
            {
                ma = max(val, ma);
            }
        }
        cout << ma << endl;
    }

    return 0;
}