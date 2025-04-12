/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-12   19:11:05
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1722/D
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
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> old(n);

        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                old[i] = i;
                sum = sum + i;
            }
            else
            {
                old[i] = (n - i) - 1;
                sum = sum + (n - i) - 1;
            }
        }
        vector<int> ans;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'L')
            {
                int right = (n - i) - 1;
                if (right > old[i])
                {
                    ans.push_back(right - old[i]);
                }
                else
                {
                    ans.push_back(0);
                }
            }
            else
            {

                int left = i;
                if (left > old[i])
                {
                    ans.push_back(left - old[i]);
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
        sort(ans.begin(), ans.end(), greater<int>());

        

        for (auto i : ans)
        {
            sum = sum + i;
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}