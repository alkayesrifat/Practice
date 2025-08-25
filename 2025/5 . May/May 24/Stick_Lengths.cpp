/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-24   07:44:03
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

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int mid = 0;

    if (n % 2 != 0)
    {
        mid = (n + 1) / 2;
        mid--;
    }
    else
    {
        mid = n / 2;
        mid--;
    }

    long long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        int temp = abs(v[mid] - v[i]);
        ans = ans + temp;
        }
    cout << ans;

    return 0;
}