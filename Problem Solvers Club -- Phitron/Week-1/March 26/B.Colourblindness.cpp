/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-26   15:33:21
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1722/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        int size;

        cin >> size;

        string s;
        string t;
        cin >> s >> t;
        // cout << s << endl << t <<endl;

        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (s[i] != t[i])
            {

                if (s[i] == 'R' || t[i] == 'R')
                {
                    // cout << s[i] << " " << t[i] << endl;
                    flag = 1;
                    break;
                }
            }
        }
        if (flag == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}