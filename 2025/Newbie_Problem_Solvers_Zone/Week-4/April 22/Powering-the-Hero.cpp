/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   15:16:27
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void s()
{

    int n;
    cin >> n;

    priority_queue<int> pq;

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        if (val != 0)
        {
            pq.push(val);
        }
        else
        {
            if (pq.empty() == false)
            {
                sum = sum + pq.top();
                pq.pop();
            }
        }
    }
    cout << sum << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        s();
    }

    return 0;
}