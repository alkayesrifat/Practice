/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   20:45:16
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    int x, y;
    cin >> x >> y;

    long long int sumx = n * x;

    long long int sumy = m * y;

    long long int re = sumx + sumy;

    cout << re << endl;

    return 0;
}