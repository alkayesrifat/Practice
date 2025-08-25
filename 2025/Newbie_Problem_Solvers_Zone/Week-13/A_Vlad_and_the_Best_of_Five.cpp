/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/06/2025 (Sunday)
 * Time       : 16:17
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
        string s;
        cin >> s;

        int a = 0, b = 0;
        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 'A')
            {
                a++;
            }
            else
            {
                b++;
            }
        }

        if (a > b)
        {
            cout << 'A' << endl;
        }
        else
        {
            cout << 'B' << endl;
        }
    }

    return 0;
}