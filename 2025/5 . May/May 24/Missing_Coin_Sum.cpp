/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-24   08:40:40
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    vector<long long int> v(n);

    for (long i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    long long sum = 0;

    for (long long i = 1; i <= n; i++)
    {

        if (v[i - 1] > sum + 1)
        {
            break;
        }
        else
        {
            sum = sum + v[i - 1];
        }
    }

    cout << sum + 1;

    return 0;
}