/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-21   19:15:49
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n;
    cin >> n;

    vector<int> st(n);

    for (int i = 0; i < n; i++)
    {
        cin >> st[i];
        // cout << st[i] << " ";
    }
    sort(st.begin(), st.end());

    int ex = 1;

    long long int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if (st[i] == ex)
        {
            ex++;
        }
        else if (st[i] > ex)
        {
            long long int temp = ans + (st[i] - ex);
            ans = temp;
            ex++;
        }
    }

    cout << ans << endl;
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