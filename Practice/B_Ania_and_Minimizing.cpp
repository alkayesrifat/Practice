/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/07/2025 (Thursday)
 * Time       : 20:14
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    if (n == 1)
    {

        if (k >= 1)
        {
            s[0] = '0';
            
        }
    }

    else if (s[0] == '1')
    {
        for (int i = 1; i < n; i++)
        {
            if (k <= 0)
            {
                break;
            }

            if (s[i] != '0')
            {
                s[i] = '0';
                k--;
            }
        }
    }
    else
    {
        if (k >= 1)
        {
            s[0] = '1';
            k--;
        }

        for (int i = 1; i < n; i++)
        {
            if (k <= 0)
            {
                break;
            }

            if (s[i] != '0')
            {
                s[i] = '0';
                k--;
            }
        }
    }

    cout << s;

    return 0;
}