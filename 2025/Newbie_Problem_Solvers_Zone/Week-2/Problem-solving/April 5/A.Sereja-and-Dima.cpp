/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-05   18:04:59
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/381/A
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;

    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int first = 0;
    int last = n - 1;

    int spoint = 0;
    int dpoint = 0;

    int track = 0;
    int nn = n;

    while (n--)
    {

        if (track == 0)
        {
            // sereja er jonno
            if (v[last] > v[first])
            {
                // add point
                spoint = spoint + v[last];
                last = last - 1;
            }
            else
            {
                // add point
                spoint = spoint + v[first];
                first = first + 1;
            }
            track = 1;
        }
        else
        {
            // dima r jonno
            if (v[last] > v[first])
            {
                // add point
                dpoint = dpoint + v[last];
                last = last - 1;
            }
            else
            {
                // add point
                dpoint = dpoint + v[first];
                first = first + 1;
            }
            track = 0;
        }
    }
    cout << spoint << " " << dpoint;

    return 0;
}