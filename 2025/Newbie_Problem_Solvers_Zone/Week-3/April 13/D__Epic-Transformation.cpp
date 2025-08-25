/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-13   12:06:29
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1506/D
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
        map<int, int> mp;
        while (n--)
        {
            int val;
            cin >> val;
            mp[val]++;
        }

        priority_queue<int> pq;

        for (auto [x, y] : mp)
        {

            pq.push(y);
        }

        while (pq.empty() == false)
        {
            if (pq.size() < 2)
            {
                break;
            }

            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();

            x--;
            y--;

            if (x > 0)
            {
                pq.push(x);
            }

            if (y > 0)
            {
                pq.push(y);
            }
        }

        int ans = 0;

        while (pq.empty() == false)
        {
            ans = ans + pq.top();
            pq.pop();
        }

        cout << ans << endl;
    }

    return 0;
}
