#include <bits/stdc++.h>
using namespace std;

long long int dp[10000];

int fibo(long long int n)
{

    if (n == 1 || n == 0)
    {
        return n;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    dp[n] = fibo(n - 1) + fibo(n - 2);
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

    cout << fibo(n);
    return 0;
}