/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-09   11:11:50
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1907/B
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
        string s;
        cin >> s;

        stack<pair<int, char>> small;
        stack<pair<int, char>> big;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'b')
            {

                if (small.empty() == false)
                {
                    small.pop();
                }
            }
            else if (s[i] == 'B')
            {
                if (big.empty() == false)
                {
                    big.pop();
                }
            }
            else
            {
                if (s[i] >= 'A' && s[i] <= 'Z')
                {
                    big.push({i, s[i]});
                }
                else
                {
                    small.push({i, s[i]});
                }
            }
        }

        map<int, char> ans;

        while (!big.empty())
        {

            pair<int, char> p = big.top();

            ans[p.first] = p.second;
            big.pop();
        }
        while (!small.empty())
        {

            pair<int, char> p = small.top();

            ans[p.first] = p.second;
            small.pop();
        }

        for (auto [i, val] : ans)
        {
            cout << val;
        }
        cout << endl;
    }

    return 0;
}