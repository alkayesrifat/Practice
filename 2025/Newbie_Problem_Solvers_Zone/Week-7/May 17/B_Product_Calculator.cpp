/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-17   19:29:17
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    long long int sum = 1;

    while (n--)
    {
        int val;
        cin >> val;

        sum = sum * val;
    }

    cout << sum << endl;

    return 0;
}