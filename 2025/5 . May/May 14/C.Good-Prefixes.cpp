/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-14   11:53:14
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maxx = INT_MIN;
        int cnt = 0;
        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            maxx = max(maxx, v[i]);
            sum = sum + v[i];
            long long int temp = sum - maxx;
            if (temp == maxx)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}