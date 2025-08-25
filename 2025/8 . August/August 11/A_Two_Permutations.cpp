/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/08/2025 (Monday)
 * Time       : 07:25
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
        int n, a, b;
        cin >> n >> a >> b;

        if (n == 1)
        {
            cout << "Yes" << endl;
            continue;
        }
        int f = 0 ;

        if (a == b)
        {
            if (a == n)
            {
                cout << "YES" << endl;
                f = 1;
            }
        }
        if(f == 1){
            continue;
        }

        int c = a + b;

        n = n - 2;

        if (c <= n)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}