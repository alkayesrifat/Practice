/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   09:42:11
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1468/C
 */

#include <bits/stdc++.h>
using namespace std;



int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    set<pair<int, int>> two;
    multiset<pair<int, int>> three;

    int i = 1;

    while (t--)
    {
        int n;
        cin >> n;
        if (n == 1)
        {
            int val;
            cin >> val;
            two.insert({i, val});
            three.insert({val, -i});
            i++;
        }

        else if (n == 3)
        {

            auto it = three.end();
            it--;
            cout << -it->second << " ";

            two.erase({-it->second, it->first});

            three.erase(it);
        }
        else
        {

            auto it = two.begin();

            cout << it->first << " ";

            three.erase({it->second, -it->first});
            two.erase(it);
        }
    }

    return 0;
}