/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-17   10:47:31
 * ---------------------
 * Problem Link:
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
        int w;
        cin >> w;

        multiset<int> s;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        int current = w;

        int h = 0;

        while (s.empty() == false)
        {
            auto it = s.upper_bound(current);

            if (it != s.begin())
            {
                it--;
                current -= *it;
                s.erase(it);
            }
            else
            {
                h++;
                current = w;
            }
        }

        cout << h + 1 << endl;
    }

    return 0;
}