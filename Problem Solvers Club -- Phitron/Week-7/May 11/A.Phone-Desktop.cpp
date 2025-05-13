/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-12   05:36:24
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
        int x, y;
        cin >> x >> y;
        if (x == 0 && y == 0)
        {
            cout << 0 << endl;
        }
        else if (y == 0 && x != 0)
        {
            if (x % 15 == 0)
            {
                cout << x / 15 << endl;
            }
            else
            {
                cout << (x / 15) + 1 << endl;
            }
        }
        else if (y != 0 && x == 0)
        {
            if (y % 2 == 0)
            {
                cout << y / 2 << endl;
            }
            else
            {
                cout << (y / 2) + 1 << endl;
            }
        }
        else
        {
            int ylakbo;

            if (y % 2 == 0)
            {
                ylakbo = y / 2;
            }
            else
            {
                ylakbo = (y + 1) / 2;
            }

            int ace = (15 * ylakbo) - (4 * y);

            if (ace >= x)
            {
                cout << ylakbo << endl;
            }
            else
            {
                int k = x - ace;
                if (k <= 15)
                {
                    ylakbo++;
                    cout << ylakbo << endl;
                }
                else
                {
                    int cnt = 0;

                    while (k > 0)
                    {
                        cnt++;
                        k = k - 15;
                    }

                    cout << ylakbo + cnt << endl;
                }
            }
        }
    }

    return 0;
}