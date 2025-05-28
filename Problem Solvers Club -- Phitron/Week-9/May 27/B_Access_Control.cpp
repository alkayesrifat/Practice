/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   20:13:24
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
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        int crr = 0;
        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                crr = x;
            }
            else if (s[i] == '0')
            {
                if (crr > 0)
                {
                    crr--;
                }
                else
                {
                    flag = false;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}