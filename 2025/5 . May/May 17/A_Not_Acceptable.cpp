/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-17   19:20:08
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int de = a * 60 + b;
    int su = c * 60 + d;

    if (su < de)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}