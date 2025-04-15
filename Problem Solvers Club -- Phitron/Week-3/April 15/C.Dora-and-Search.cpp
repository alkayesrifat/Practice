/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-15   08:39:12
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        int n;
        cin >> n;

        deque<int> dq;
        map<int, int> mp;

        set<int> st;

        for (int i = 1; i <= n; i++)
        {
            int nn;
            cin >> nn;
            dq.push_back(nn);
            mp[nn] = i;
            st.insert(nn);
        }

        for (int i = 0; i < dq.size(); i++)
        {

            auto minn = st.begin();
            auto maxx = --st.end();

            if (*minn == dq[0] || *maxx == dq[0])
            {
                st.erase(dq[0]);
                dq.pop_front();

                i = 0;
            }
            if (dq.empty() == false)
            {

                if (*minn == dq[dq.size() - 1] || *maxx == dq[dq.size() - 1])
                {
                    st.erase(dq[dq.size() - 1]);
                    dq.pop_back();

                    i = 0;
                }
            }

            // cout << minn << " " << maxx << endl;
        }

        if (dq.size() < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << mp[dq[0]] << " " << mp[dq[dq.size() - 1]] << endl;
        }

        // cout << dq.size();

        // for (int i = 0; i < dq.size(); i++)
        // {
        //     cout << dq[i] << " ";
        // }
    }

    return 0;
}