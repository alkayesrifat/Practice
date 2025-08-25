/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-19   19:28:45
 * ---------------------
 * Problem Link: https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/C
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int m;

    cin >> n >> m;

    vector<int> a(n), b(m);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }

    int l = 0, r = 0;
    long long int sum = 0;
    while (l < n && r < m)
    {
        int curr = a[l], count1 = 0, count2 = 0;
        while (l < n && curr == a[l])
        {
            l++;
            count1++;
        }
        while (r < m && curr > b[r])
        {
            r++;
        }

        while (r < m && curr == b[r])
        {
            r++;
            count2++;
        }

        sum += (1LL * count1 * count2);
    }
    cout << sum << endl;

    return 0;
}