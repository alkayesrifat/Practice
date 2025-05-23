/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-22   10:39:03
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

        long long int re = (a ^ b);

        cout << re << endl;
    }

    return 0;
}