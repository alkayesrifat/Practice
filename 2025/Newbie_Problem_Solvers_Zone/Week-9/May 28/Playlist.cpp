/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-28   12:39:43
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

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    map<int, int> mp;

    int i = 0;
    int j = 0;

    int maxx = 0;

    for (int i = 0; i < n; i++)
    {
        mp.clear();
        int cnt = 0;
        for (int j = i; j < n; j++)
        {
            mp[v[j]]++;
            if (v[j] > 1)
            {
                maxx = max(cnt, maxx);
                break;
            }
            cnt++;
        }
    }
    cout << maxx;

    return 0;
}