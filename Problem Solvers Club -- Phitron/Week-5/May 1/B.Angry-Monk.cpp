/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-01   11:50:48
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
        int su;
        int n;
        cin >> su >> n;
        vector<int> v;
        int maxindex = INT_MIN;
        int maxnumber = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            if (val > maxnumber)
            {
                maxnumber = val;
                maxindex = i;
            }
            v.push_back(val);
        }

        int vanga = 0;

        for (int i = 0; i < n; i++)
        {
            if (i == maxindex)
            {
                continue;
            }
            vanga = vanga + (v[i] - 1);
        }
        int one = su - maxnumber;
        cout << vanga + one << endl;
    }

    return 0;
}