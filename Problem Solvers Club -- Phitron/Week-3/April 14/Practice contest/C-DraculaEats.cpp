/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   21:30:07
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
        if (n < 2)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << (n - 2) / 7 + 1 << endl;
        }
    }

    return 0;
}