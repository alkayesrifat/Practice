/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-26   10:04:12
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long int n)
{
    if (n == 1)
    {
        return false;
    }

    for (long long int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << 1;
    }
    else if (n % 2 == 0)
    {
        cout << 2 << endl;
    }
    else
    {
        if (isPrime(n - 2))
        {
            cout << 2 << endl;
            /* code */
        }
        else
        {
            cout << 3 << endl;
        }
    }

    return 0;
}