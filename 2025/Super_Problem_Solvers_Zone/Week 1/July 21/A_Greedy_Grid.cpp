/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 05:54
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int a, b;
        cin >> a >> b;

        if (a == 1 || b == 1 || (a == 2 && b == 2))
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
