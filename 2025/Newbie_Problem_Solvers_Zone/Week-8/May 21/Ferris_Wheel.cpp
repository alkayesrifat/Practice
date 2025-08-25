/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   05:55:03
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
    long long int x;
    cin >> n >> x;

    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int cnt = 0;

    int i = 0, j = n - 1;

    while (i <= j)
    {
        if (v[i] + v[j] <= x)
        {
            cnt++;
            i++;
            j--;
        }
        else
        {
            cnt++;
            j--;
        }
    }

    cout << cnt;

    return 0;
}