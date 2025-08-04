/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/07/2025 (Wednesday)
 * Time       : 06:46
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool> v(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (v[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (v[i])
        {
            cout << i << ' ';
        }
    }

    return 0;
}