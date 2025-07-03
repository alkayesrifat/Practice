/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/07/2025 (Thursday)
 * Time       : 06:05
 * ---------------------
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
        int n, m, k;
        cin >> n >> m >> k;
        int cnta = 0;

        set<int> st;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val <= k)
            {
                if (mp[val] == 0)
                {
                    cnta++;
                    st.insert(val);
                    mp[val]++;
                }
            }
        }
        int cntb = 0;
        map<int,int>mp2;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin >> val;

            if (val <= k)
            {
                if (mp2[val] == 0)
                {
                    cntb++;
                    st.insert(val);
                    mp2[val]++;
                }
            }
        }

        // cout << cnta << " " << cntb << " " << st.size() << endl;
        if (cnta >= (k/2) && cntb >= (k/2) && st.size() == k)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}