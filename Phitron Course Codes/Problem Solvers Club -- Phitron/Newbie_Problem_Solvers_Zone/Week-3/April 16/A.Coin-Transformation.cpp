/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-16   16:21:41
 * ---------------------
 * Problem Link:
 * 
 * 
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
        long long int n;
        cin >> n;
        long long int coint = 1;

        while (n > 3)
        {
            coint = coint * 2;
            n = n / 4;
        }
        cout << coint << endl;
    }

    return 0;
}