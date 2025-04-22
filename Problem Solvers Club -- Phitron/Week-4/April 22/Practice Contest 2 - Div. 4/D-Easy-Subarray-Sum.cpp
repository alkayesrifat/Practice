/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   21:13:19
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<int> v(n);

    int pos = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        // cout << v[i] << " ";
        if (v[i] > 0)
        {
            pos++;
        }
    }
    if (pos == 0)
    {
        cout << 0 << endl;
    }
    else
    {
        int l = 0;
        int r = 0;
        int ans = INT_MAX;
        int maxsum = INT_MIN;

        int minuscnt = 0;
        int withminussum = 0;
        int withoutminussum = 0;

        while (l < n && r < n)
        {

            if (v[r] == 0 || r == n - 1)
            {
                // make dicision
                if (v[r] < 0 && r == n - 1)
                {
                    minuscnt++;
                }

                if (withoutminussum > withminussum)
                {
                    if (withoutminussum > maxsum)
                    {
                        ans = minuscnt;
                    }
                    else if (withoutminussum == maxsum)
                    {
                        ans = min(ans, minuscnt);
                    }
                }

                withminussum = 0;
                withoutminussum = 0;
                minuscnt = 0;

                l++;
            }

            if (v[r] < 0)
            {
                withminussum = withminussum + v[r];
                withoutminussum = withoutminussum + 0;
                minuscnt++;
            }
            else
            {
                withminussum = withminussum + v[r];
                withoutminussum = withoutminussum + v[r];
            }

            r++;
        }
        cout << ans << endl;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}