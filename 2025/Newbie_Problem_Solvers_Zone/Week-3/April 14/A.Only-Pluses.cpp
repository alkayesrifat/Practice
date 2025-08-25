/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   16:30:23
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;

    while (test--)
    {
        priority_queue<int, vector<int>, greater<int>> pq;
        int a, b, c;
        cin >> a >> b >> c;

        pq.push(a);
        pq.push(b);
        pq.push(c);

        int move = 5;

        while (move--)
        {
            int first = pq.top();
            pq.pop();
            first++;
            pq.push(first);
            // cout << first - 1 << " " << first << endl;
        }

        long long int ans = 1;

        while (pq.empty() == false)
        {
            ans = ans * pq.top();
            pq.pop();
        }
        cout << ans << endl;
    }

    return 0;
}