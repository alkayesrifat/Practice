/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-29   20:23:08
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    map<int, int> mp;

    int i = 0, j = 0;

    int maxcnt = 0;

    while (j < n)
    {
        mp[v[j]]++;

        while (mp[v[j]] > 1)
        {
            mp[v[i]]--;
            if (mp[v[i]] == 0)
                mp.erase(v[i]);
            i++;
        }
        maxcnt = max(maxcnt, j - i + 1);
        j++;
    }

    cout << maxcnt;

    return 0;
}