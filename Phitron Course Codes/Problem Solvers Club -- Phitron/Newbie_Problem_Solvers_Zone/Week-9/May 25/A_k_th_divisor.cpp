/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-25   07:27:59
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n;

    long long int k;
    cin >> n >> k;

    int sq = sqrt(n);

    vector<long long int> v;

    for (int i = 1; i <= sq; i++)
    {
        long long a;
        long long b;
        if (n % i == 0)
        {
            v.push_back(i);
            b = n / i;
            if (b == i)
            {
                break;
            }

            v.push_back(b);
        }
    }

    sort(v.begin(), v.end());

    if (v.size() < k)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << v[k - 1];
    }

    return 0;
}