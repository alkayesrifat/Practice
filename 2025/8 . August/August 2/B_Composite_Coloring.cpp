/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 06:22
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
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        map<int, vector<int>> mp;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 11; j++)
            {
                if (v[i] % prime[j] == 0)
                {
                    mp[prime[j]].push_back(i);
                    break;
                }
            }
        }

        vector<int> ans(n);
        int color = 1;
        for (auto x : mp)
        {
            for (auto pos : x.second)
            {
                ans[pos] = color;
            }
            color++;
        }

        cout << mp.size() << endl;

        for(auto x  : ans){
            cout <<x << " " ;

        }
        cout << endl;




    }

    return 0;
}