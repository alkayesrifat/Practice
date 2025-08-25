/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-07   17:13:52
 * Source:
 */

#include <bits/stdc++.h>
using namespace std;

int w[1000];
int v[1000];
int dp[1000][1000];

int adventure(int n, int max_weight)
{
    if (n < 0)
    {
        return 0;
    }
    if (max_weight == 0 || max_weight < 0)
    {
        return 0;
    }

    if (dp[n][max_weight] != -1)
    {
        return dp[n][max_weight];
    }

    if (w[n] <= max_weight)
    {
        
        int option1 = adventure(n - 1, max_weight - w[n]) + v[n];
        int option2 = adventure(n - 1, max_weight);
        dp[n][max_weight] = max(option1, option2);
        return dp[n][max_weight];
    }
    else
    {
        
        int option2 = adventure(n - 1, max_weight);
        dp[n][max_weight] = option2;
        return dp[n][max_weight];
    }
}

int main()
{

    int test_case;
    cin >> test_case;

    while (test_case--)
    {
        int n, max_weight;
        cin >> n >> max_weight;

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= max_weight; j++)
            {
                dp[i][j] = -1;
            }
        }

        for (int i = 0; i < n; i++)
        {

            cin >> w[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cout << adventure(n - 1, max_weight) << endl;
    }

    return 0;
}