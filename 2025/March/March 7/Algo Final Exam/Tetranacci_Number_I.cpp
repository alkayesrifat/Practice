/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-07   09:09:24
 * Source:
 */

#include <bits/stdc++.h>
using namespace std;

int dp[50];

int tetranacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1 || n == 2)
    {
        return 1;
    }
    if (n == 3)
    {
        return 2;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = tetranacci(n - 1) + tetranacci(n - 2) + tetranacci(n - 3) + tetranacci(n - 4);
    return dp[n];
}

int main()
{

    int n;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        dp[i] = -1;
    }

    cout << tetranacci(n);

    return 0;
}