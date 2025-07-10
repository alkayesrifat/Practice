/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-25   10:42:43
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

        vector<int> v;

        long long int maxsum = 0;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            maxsum = maxsum + abs(val);
            v.push_back(val);
        }

        long long int operation = 0;

        int l = 0;

        while (l < n)
        {
            if (v[l] < 0)
            {
                operation++;
                while (1)
                {
                    if (l == n)
                    {
                        break;
                    }
                    
                    if (l != n && v[l] > 0)
                    {
                        break;
                    }
                    else
                    {
                        l++;
                    }
                }
            }
            l++;
            // cout << l << " ";
        }

        cout << maxsum << " " << operation << endl;
    }

    return 0;
}