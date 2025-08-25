/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 10:15
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        while (k--)
        {
            x += 1;
            if (x % y == 0)
            {
                while (x % y == 0)
                {
                    x = x / y;
                }
            }
        }

        cout << x << endl;
    }

    return 0;
}