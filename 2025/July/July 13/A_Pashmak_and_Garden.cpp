/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 07:13
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

// not solved

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    if ((x1 != x2 && y1 != y2) && abs(x1 - x2) != abs(y1 - y2))
    {
        cout << -1 << endl;
    }
    else
    {
        if (x1 == x2)
        {

            cout << x1 + abs(y1 - y2) << " " << y1 << " " << +abs(y1 - y2) << " " << y2;
        }
        else if (y1 == y2)
        {
            cout << x1 << " " << +abs(x1 - x2) << " " << x2 << " " << y2 + abs(x1 - x2);
        }

        else
        {
            cout << x2 << " " << y1 << " " << x1 << " " << y2;
        }
    }

    return 0;
}