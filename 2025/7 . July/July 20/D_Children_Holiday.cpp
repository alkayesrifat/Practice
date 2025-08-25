/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/07/2025 (Sunday)
 * Time       : 09:49
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> m >> n;

    vector<tuple<int, int, int>> v(n);
    vector<int> re(n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v[i] = make_tuple(a, b, c);
    }

    auto ok = [&](int mid)
    {
        vector<int> may(n);

        int has = m;
        for (int i = 0; i < n; i++)
        {

            tuple<int, int, int> T = v[i];

            int t = get<0>(T);
            int z = get<1>(T);
            int y = get<2>(T);

            int total = (t * z) + y;

            int full = mid / total;

            int par = mid % total;

            int crr = ((full * z) + min(z, (par / t)));

            crr = min(has, crr);

            has -= crr;
            may[i] = crr;
        }
        if (has == 0)
        {
            for (int i = 0; i < n; i++)
            {
                re[i] = may[i];
                /* code */
            }
        }
        return !has;
    };

    int l = 0, r = 1e9, mid, ans;

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (ok(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;

    for(auto x : re){
        cout << x << " ";
    }

    return 0;
}