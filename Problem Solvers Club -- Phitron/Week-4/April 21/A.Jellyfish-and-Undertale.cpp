/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-21   15:41:02
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
        int m, i, tool;
        cin >> m >> i >> tool;
        long long int sum = 0;

        while (tool--)
        {
            int val;
            cin >> val;
            if (val >= m)
            {
                sum = sum + m - 1;
            }
            else
            {
                sum = sum + val;
            }
        }

        sum = sum + (i - 1) + 1;

        cout << sum << endl;
    }

    return 0;
}