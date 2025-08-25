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

    long long n;
    cin >> n;

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({b, a});
    }

    sort(p.begin(), p.end());
    int cnt = 0;

    int crr = 0;

    for (long long i = 0; i < n; i++)
    {
        if (i == 0)
        {
            crr = p[i].first;
            cnt++;
        }
        else
        {
            if (crr <= p[i].second)
            {
                cnt++;
                crr = p[i].first;
            }
        }
    }

    cout << cnt;

    return 0;
}