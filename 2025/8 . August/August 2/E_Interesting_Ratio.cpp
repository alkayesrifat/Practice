/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 07:20
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

bool isp(long long n)
{
    if (n < 2)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (long long i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10000000;
    vector<int> prs;
    vector<bool> prime(n, true);
    for (int i = 2;  i <= n; i++)
    {
        if (prime[i])
        {
            prs.push_back(i);
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        int cnt = 0;

        for (auto pr : prs)
        {

            for (int i = 1; i <= n; i++)
            {
                ll our = i * pr;
                if (our > n)
                {
                    break;
                }
                cnt++;
            }
        }
        cout << cnt << endl;
    }

    return 0;
}