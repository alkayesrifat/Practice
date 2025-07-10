/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   17:59:21
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
        int a, b;
        cin >> a >> b;

        long long int fata = (a + b) / 2;

        long long int fata2 = fata / 2;

        if (__gcd(fata2, fata2) != 1)
        {
            cout << fata2 << " " << fata2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

    return 0;
}