/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-24   19:54:12
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
        long long int n, m;
        cin >> n >> m;

        long long int orr = n;

        for (long long int i = 1; i <= m; i++)
        {
            long long int crr = n + i;
            long long int mew = crr | orr;

            if (mew == orr)
            {
                break;
            }

            orr = mew;
        }
        cout << orr << endl;
    }

    return 0;
}