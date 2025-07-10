/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-23   12:50:10
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        int n;
        cin >> n;

        int inputn = n * (n - 1) / 2;

        vector<int> v(inputn);

        for (int i = 0; i < inputn; i++)
        {
            // int val;
            // cin >> val;
            // cout << val;
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        // for (auto x : v)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        int prev = 0;
        vector<int> st;
        v.push_back(min(v.back() + 1, 1000000000));
        for (int i = 0; i < n; i++)
        {
            int kalkbe = n - i - 1;
            st.push_back(v[prev]);
            // cout << prev << " ";
            // cout << kalkbe << " ";
            prev = prev + kalkbe;
        }
        // cout << endl;

        for (auto x : st)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}