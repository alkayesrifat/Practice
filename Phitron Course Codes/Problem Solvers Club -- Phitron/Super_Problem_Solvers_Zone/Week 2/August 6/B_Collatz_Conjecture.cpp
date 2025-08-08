/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/08/2025 (Wednesday)
 * Time       : 17:24
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

        while (x > 1)
        {
            int dor = y - (x % y);
            if (dor >= k)
            {
                x += k;
                k = 0;
            }
            else
            {
                k -= dor;
                x += dor;
            }
            while (x % y == 0)
            {
                x = x / y;
            }
            if (k <= 0)
                break;
        }

        if (k >= 1)
        {
            k = k % (y-1);
            x+=k;
            while (x % y == 0)
            {
                x/=y;
            }
            
        }
        cout <<x << endl;


    }

    return 0;
}