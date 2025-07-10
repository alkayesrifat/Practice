/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-08   11:22:02
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/2092/B
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
        string first;
        string second;
        cin >> first >> second;

        int first_odd = 0;
        int second_odd = 0;
        int first_even = 0;
        int second_even = 0;

        for (int i = 0; i < n; i++)
        {

            if (i % 2 == 0)
            {

                if (first[i] == '1')
                {
                    first_even++;
                }
                if (second[i] == '0')
                {
                    second_even++;
                }
            }
            else
            {

                if (first[i] == '1')
                {
                    first_odd++;
                }
                if (second[i] == '0')
                {
                    second_odd++;
                }
            }
        }

        if (second_odd >= first_even && second_even >= first_odd)
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