/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-12   15:34:19
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/368/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n + 1);

    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    vector<int> ans(n + 1);
    set<int> st;

    for (int i = n; i >= 1; i--)
    {
        st.insert(v[i]);
        ans[i] = st.size();
    }

    while (m--)
    {
        int q;
        cin >> q;
        cout << ans[q] << endl;
    }

    return 0;
}