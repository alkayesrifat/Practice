/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   22:11:21
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

        string a;
        string b;
        cin >> a >> b;

        int apoint = 0;
        int bpoint = 0;

        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R')
            {
                if (b[i] == 'S')
                {
                    apoint++;
                }
                else if (b[i] == 'P')
                {
                    bpoint++;
                }
            }
            else if (a[i] == 'S')
            {

                if (b[i] == 'P')
                {
                    apoint++;
                }
                else if (b[i] == 'R')
                {
                    bpoint++;
                }
            }
            else
            {

                if (b[i] == 'R')
                {
                    apoint++;
                }
                else if (b[i] == 'S')
                {
                    bpoint++;
                }
            }
        }

        if (apoint > bpoint)
        {
            cout << 0 << endl;
        }
        else if (apoint == bpoint)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << bpoint - apoint << endl;
        }
    }

    return 0;
}