/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-23   09:49:02
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(m + 1);

    for (int i = 0; i < m + 1; i++)
    {
        cin >> v[i];
    }

    int andd = INT_MIN;

    int she = v[m];

    int ans = 0;

    for (int i = 0; i < m; i++)
    {
        int cnt = 0;

        for (int k = 0; k <= n; k++)
        {
            int fedor = ((she >> k) & 1);
            int othere = ((v[i] >> k) & 1);

            if (fedor != othere)
            {
                cnt++;
            }
        }

        if (cnt <= k)
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}