/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   16:58:32
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

    map<int, int> mp;
    int cnt = 0;
    int maxx = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        mp[v[i]]++;
        if (mp[v[i]] > 1)
        {
            maxx = max(maxx, cnt);
            cnt = 0;
            mp.clear();
            mp[v[i]] = 1;
        }
        cnt++;
        if (i == n - 1)
        {
            maxx = max(maxx, cnt);
        }
    }

    cout << maxx;

    return 0;
}