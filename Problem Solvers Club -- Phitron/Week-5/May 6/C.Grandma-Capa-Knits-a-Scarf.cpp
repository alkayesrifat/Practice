/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-06   09:17:14
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

        string s;
        cin >> s;

        set<char> st;

        for (int i = 0; i < n; i++)
        {
            st.insert(s[i]);
        }

        int maxcount = 0;
        bool flag = false;
        vector<long long int> ans(26, LONG_LONG_MAX);
        for (auto c : st)
        {

            int l = 0;
            int r = n - 1;

            int current = 0;

            while (l < r)
            {
                if (s[l] == s[r])
                {
                    l++;
                    r--;
                }
                else
                {

                    if (s[l] == c)
                    {
                        current++;
                        l++;
                    }
                    else if (s[r] == c)
                    {
                        current++;
                        r--;
                    }
                    else
                    {
                        current = -1;
                        break;
                    }
                }
            }
            if (current != -1)
            {

                ans[c - 'a'] = current;
            }
        }
        sort(ans.begin(), ans.end());
        if (ans[0] == LONG_LONG_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans[0] << endl;
        }
    }

    return 0;
}