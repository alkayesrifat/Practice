/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 17:28
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
        string s;
        cin >> s;
        int sum = 0;
        for (char c : s)
            sum += (c - '0');

        if (sum % 3 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}