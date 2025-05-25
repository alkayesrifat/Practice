/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-25   04:14:05
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int x;
    cin >> x;

    long long sum = 0;

    while (n--)
    {
        int val;
        cin >> val;
        sum = sum + val;
    }
    cout << sum;

    return 0;
}