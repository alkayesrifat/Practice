/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-09   10:51:40
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

        vector<int> v(n);

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int count = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[v[i]] == 0)
            {
                count++;
                mp[v[i]]++;
            }
            else
            {
                break;
            }
        }
        cout << n - count << endl;
        
    
    }

    return 0;
}