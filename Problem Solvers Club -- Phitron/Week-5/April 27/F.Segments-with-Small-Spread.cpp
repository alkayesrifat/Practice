/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-27   10:42:13
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    multiset<long long int> ml;

    long long int l = 0, r = 0;
    long long int ans = 0;

    while (r < n)
    {
        ml.insert(a[r]);

        long long int maxx = *ml.rbegin();
        long long int minn = *ml.begin();

        long long int mm = maxx - minn;

        if (mm <= k)
        {
            ans = ans + (r - l + 1);
        }
        else
        {
            while (l <= r)
            {
                maxx = *ml.rbegin();
                minn = *ml.begin();

                mm = maxx - minn;
                if (mm <= k)
                {
                    break;
                }

                auto it = ml.find(a[l]);
                ml.erase(it);
                l++;
            }
            maxx = *ml.rbegin();
            minn = *ml.begin();

            mm = maxx - minn;

            if (mm <= k)
            {
                ans = ans + (r - l + 1);
            }
        }
        r++;
    }

    cout << ans << endl;

    return 0;
}