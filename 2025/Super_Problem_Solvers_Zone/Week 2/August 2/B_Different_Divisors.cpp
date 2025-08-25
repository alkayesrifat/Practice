/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 10:41
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
    int n = 10000000+ 100;
    vector<bool> prime(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }

    vector<int> ans;
    int cnt = 0;
    for (auto x : prime)
    {
        if ((cnt != 0 && cnt != 1) && x)
        {
            ans.push_back(cnt);
        }
        cnt++;
    }

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll d;
        cin >> d;

        ll fir;

        // for(auto x  : ans){
        //     cout <<x << " " ;
        // }

        for (int i = 0; i < ans.size(); i++)
        {
            int tt = ans[i] - 1;
            if (tt >= d)
            {
                fir = ans[i];
                break;
            }
        }

        ll sec;

        for (int i = 0; i < ans.size(); i++)
        {
            int tt = ans[i] - fir;
            if (tt >= d)
            {
                sec = ans[i];
                break;
            }
        }

        ll num = fir * sec;

        cout << num << endl;
    }

    return 0;
}