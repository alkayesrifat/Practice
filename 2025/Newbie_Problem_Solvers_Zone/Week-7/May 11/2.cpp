/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-12   20:21:11
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            long long int aa = a[i] * 2;
            long long int bb = b[i] * 2;
            if ((aa >= b[i]) && (bb >= a[i]))
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}