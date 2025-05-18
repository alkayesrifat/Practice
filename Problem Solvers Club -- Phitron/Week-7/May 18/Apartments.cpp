/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-18   19:17:32
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> want(n);

    for (int i = 0; i < n; i++)
    {
        cin >> want[i];
    }

    vector<int> cursize(m);
    for (int i = 0; i < m; i++)
    {
        cin >> cursize[i];
    }

    int cnt = 0;

    sort(want.begin(), want.end());

    sort(cursize.begin(), cursize.end());

    for (int i = n - 1; i >= 0; i--)
    {
        int l = want[i] - k;
        int r = want[i] + k;
        
        
    }
    cout << cnt;

    return 0;
}