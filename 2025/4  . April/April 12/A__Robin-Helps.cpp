/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-12   15:14:08
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n;
        int k;
        cin >> n >> k;

        int gold = 0;
        int zero = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val >= k)
            {
                gold = gold + val;
            }
            if (val == 0 && gold > 0)
            {
                zero++;
                gold--;
            }
        }
        cout << zero << endl;
    }

    return 0;
}