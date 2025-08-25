/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   21:51:22
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int n, k, l;

        cin >> n >> k >> l;

        priority_queue<int> st;

        for (int i = 0; i < n; i++)
        {
            int len, lang;
            cin >> len >> lang;

            if (lang == l)
            {
                st.push(len);
            }
        }
        long long int ans = 0;

        if (st.size() < k)
        {
            cout << -1 << endl;
        }
        else
        {
            while (k--)
            {
                // cout << st.top() << " ";
                ans = ans + st.top();
                st.pop();
            }
            cout << ans << endl;
        }
    }

    return 0;
}