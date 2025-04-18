/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-17   09:24:23
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
        set<int> s;

        for (int i = 1; i <= n; i++)
        {
            s.insert(i);
        }

        cout << 2 << endl;

        while (s.size() != 1)
        {
            auto first = --s.end();
            auto second = --(--s.end());

            int result = (*first + *second + 1) / 2;

            cout << *first << " " << *second << endl;

            s.erase(first);
            s.erase(second);

            s.insert(result);
        }
    }

    return 0;
}