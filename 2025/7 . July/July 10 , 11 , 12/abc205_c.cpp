/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/07/2025 (Thursday)
 * Time       : 21:29
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;

    if (c % 2 == 0)
    {
        if (abs(a) > abs(b))
        {
            cout << '>' << endl;
        }
        else if (abs(a) < abs(b))
        {
            cout << "<" << endl;
        }
        else
        {
            cout << '=' << endl;
        }
    }
    else
    {
        if ((a) > (b))
        {
            cout << '>' << endl;
        }
        else if ((a) < (b))
        {
            cout << "<" << endl;
        }
        else
        {
            cout << '=' << endl;
        }
    }
    

    return 0;
}