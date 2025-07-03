/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/06/2025 (Sunday)
 * Time       : 17:49
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
int dsum(int n)
{
    int sum = 0;
    if (n == 0)
    {
        return 0;
    }

    while (n > 0)
    {
        int r = n % 10;
        sum += r;
        n /= 10;
    }
    return sum;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> ans(200000+1);

    for (int i = 1; i <= 200000 ; i++)
    {
        ans[i] = ans[i-1] + dsum(i);
    }
   

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        cout << ans[n] << endl;
    }

    return 0;
}