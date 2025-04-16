/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-15   19:24:12
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
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            v[i] = val;
        }

        int sn;
        cin >> sn;

        while (sn--)
        {
            string s;
            cin >> s;

            map<char, set<int>> mp;
            map<int, set<char>> mpp;

            if (s.size() != n)
            {
                cout << "NO" << endl;
            }
            else
            {
                int flag = 0;

                for (int i = 0; i < n; i++)
                {

                    mp[s[i]].insert(v[i]);

                    mpp[v[i]].insert(s[i]);

                    if (mp[s[i]].size() > 1 || mpp[v[i]].size() > 1)
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 1)
                {
                    cout << "NO" << "\n";
                }
                else
                {
                    for (auto [x, y] : mp)
                    {
                        if (y.size() > 1)
                        {
                            int flag = 1;
                            break;
                        }
                    }
                    for (auto [x, y] : mpp)
                    {
                        if (y.size() > 1)
                        {
                            int flag = 1;
                            break;
                        }
                    }
                    if (flag == 1)
                    {
                        cout << "NO" << "\n";
                    }
                    else
                    {
                        cout << "YES" << "\n";
                    }
                }
            }
        }
    }

    return 0;
}