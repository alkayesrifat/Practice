/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/06/2025 (Monday)
 * Time       : 22:06
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
        int n, m;
        cin >> n >> m;

        string s, t;
        cin >> s >> t;

        if (s == t)
        {
            cout << "YES" << endl;
            continue;
        }

        int a1 = 0;
        int a2 = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
                a1++;
        }

        for (int i = 0; i < m; i++)
        {
            if (t[i] == 'a')
                a2++;
        }

        if (a1 == a2 && (a1 != 0 || a2 != 0))
        {

            int lastb1=0; int lastb2 = 0;

            for (int i = 0; i < n; i++)
            {
                if (s[i] == 'b')
                {
                    lastb1++;
                }
                else
                {
                    break;
                }
            }

            for (int i = 0; i < m; i++)
            {
                if (t[i] == 'b')
                {
                    lastb2++;
                }
                else
                {
                    break;
                }
            }

            if (lastb1 != lastb2)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
