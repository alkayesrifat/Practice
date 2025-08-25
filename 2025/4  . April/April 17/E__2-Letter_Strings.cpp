/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-17   17:33:05
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
        vector<string> v(n);
        map<char, set<int>> first;
        map<char, set<int>> second;
        map<string, int> koybar;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            first[v[i][0]].insert(i);
            second[v[i][1]].insert(i);
            koybar[v[i]]++;
        }
        // for (auto [x, y] : first)
        // {
        //     cout << x << " -> ";
        //     for (auto val : y)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }
        // cout << endl
        //      << endl;
        // for (auto [x, y] : second)
        // {
        //     cout << x << " -> ";
        //     for (auto val : y)
        //     {
        //         cout << val << " ";
        //     }
        //     cout << endl;
        // }

        long long int sum = 0;

        for (int i = 0; i < n; i++)
        {
            if (koybar[v[i]] > 1)
            {
                sum = sum + first[v[i][0]].size() - 1 - (koybar[v[i]] - 1);
                first[v[i][0]].erase(first[v[i][0]].begin());

                sum = sum + second[v[i][1]].size() - 1 - (koybar[v[i]] - 1);
                second[v[i][1]].erase(second[v[i][1]].begin());
                koybar[v[i]]--;
            }
            else
            {

                sum = sum + first[v[i][0]].size() - 1;
                first[v[i][0]].erase(first[v[i][0]].begin());

                sum = sum + second[v[i][1]].size() - 1;
                second[v[i][1]].erase(second[v[i][1]].begin());
            }
        }

        cout << sum << endl;
    }

    return 0;
}