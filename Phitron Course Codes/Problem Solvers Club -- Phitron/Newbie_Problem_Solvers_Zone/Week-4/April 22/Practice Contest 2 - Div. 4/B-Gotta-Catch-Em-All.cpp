/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   20:55:39
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void osama()
{

    int n;
    cin >> n;
    int nor;
    int po;
    cin >> nor >> po;

    long long int sum = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        long long int norsum = val * nor;

        if (norsum < po)
        {
            sum = sum + norsum;
        }
        else
        {
            sum = sum + po;
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
        osama();
    }

    return 0;
}