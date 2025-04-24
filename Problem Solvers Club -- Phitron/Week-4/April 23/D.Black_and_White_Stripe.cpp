/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-23   12:20:27
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

        int n, k;
        cin >> n >> k;

        vector<char> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;

        priority_queue<int, vector<int>, greater<int>> pq;

        

        int l = 0, r = 0;

        while (r < n)
        {

            if (v[r] == 'W')
            {
                cnt++;
            }
            if (r - l + 1 == k)
            {
                pq.push(cnt);
                if (v[l] == 'W')
                {
                    cnt = cnt - 1;
                }
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }

        cout << pq.top() << endl;
    }

    return 0;
}