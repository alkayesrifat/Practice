/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/07/2025 (Thursday)
 * Time       : 07:00
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"
bool check(ll sum)
{
    if (sum == 1) return true;

    ll ss = 1;
    for (int i = 1; ss <= sum; i++)
    {
        ss += 8 * i;
        if (ss == sum)
        {
            return true;
        }
    }
    return false;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        int cnt = 0;
        ll sum = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (i == 0)
            {
                sum = v[i];
                if (v[i] == 1)
                {
                    cnt++;
                }
                
            }
            else
            {

                sum = (long long )sum + v[i];

                if (check(sum))
                {
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}