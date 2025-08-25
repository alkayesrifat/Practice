/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-27   14:00:43
 * ---------------------
 * Problem Link:  https://codeforces.com/problemset/problem/1883/B
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
        int target;
        cin >> n >> target;
        string s;
        cin >> s;

        vector<int> farray(26, 0);

        for (int i = 0; i < n; i++)
        {
            int index = s[i] - 'a';
            farray[index]++;
        }
        int oddcount = 0;

        for (int i = 0; i < 26; i++)
        {
            if (farray[i] > 0)
            {
                if (farray[i] % 2 != 0)
                {
                    oddcount++;
                }
            }
        }

        if (target < oddcount-1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}