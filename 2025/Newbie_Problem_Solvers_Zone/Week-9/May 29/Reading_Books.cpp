/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-30   20:20:08
 * Portfolio  : alkayesrifat.netlify.app
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
    long long int maxx = 0;
    long long int sum = 0;
    while (n--)
    {
        long long int val;
        cin >> val;
        sum = sum + val;
        maxx = max(maxx, val);
    }

    long long ans = max((2 * maxx), sum);

    cout
        << ans;

    return 0;
}