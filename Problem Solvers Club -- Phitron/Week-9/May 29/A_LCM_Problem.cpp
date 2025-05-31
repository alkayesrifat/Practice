/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-30   09:40:03
 * Portfolio  : alkayesrifat.netlify.app
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
        int l, r;
        cin >> l >> r;

        if (2 * l > r)
        {
            cout << -1 << " " << -1 << endl;
        }
        else
        {
            cout << l << " " << 2 * l << endl;
        }
    }

    return 0;
}