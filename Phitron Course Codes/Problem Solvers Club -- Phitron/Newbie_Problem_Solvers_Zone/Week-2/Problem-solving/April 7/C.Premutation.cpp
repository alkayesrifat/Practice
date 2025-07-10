/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-08   10:08:37
 * ---------------------
 * Problem Link:  https://codeforces.com/problemset/problem/1790/C
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
        vector<vector<int>> v(n, vector<int>(n - 1));

        set<int> st;
        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int num;
                cin >> num;
                if (j == 0)
                {
                    mp[num]++;
                }

                v[i][j] = num;
            }
        }
        int target = 0;
        int minn = INT_MAX;
        int theshonkha = 0;
        int maxx = 0;

        for (auto [y, z] : mp)
        {
            if (z < minn)
            {
                minn = z;
                target = y;
            }
            if (z > maxx)
            {
                maxx = z;
                theshonkha = y;
            }
        }
        

        for (int i = 0; i < n; i++)
        {
            if (v[i][0] == target)
            {
                target = i;
                break;
            }
        }
        cout << theshonkha << " ";

        for (int i = 0; i < n - 1; i++)
        {
            cout << v[target][i] << " ";
        }
        cout << endl;
    }

    return 0;
}