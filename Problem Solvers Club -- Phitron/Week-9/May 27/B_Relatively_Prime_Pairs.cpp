/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   10:54:53
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    if (n == 1)
    {
        return false;
    }
    else
    {

        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int l, r;
    cin >> l >> r;

    cout << "YES" << endl;

    for (long long int i = l; i <= r; i = i + 2)
    {
        cout << i << " " << i + 1 << endl;
    }

    return 0;
}