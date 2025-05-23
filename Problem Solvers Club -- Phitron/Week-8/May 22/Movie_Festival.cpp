/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-22   14:50:52
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

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    sort(p.begin(), p.end());

    // for (auto a : p)
    // {
    //     cout << a.first << " " << a.second << endl;
    // }
    int cnt = 0;
    for (int i = 0; i < n - 1; i++)
    {

        if (p[i + 1].first > p[i].first && p[i + 1].second < p[i].second)
        {
            // cnt++;
        }
        else
        {
            cnt = cnt + 2;
        }
    }

    cout << cnt;

    return 0;
}