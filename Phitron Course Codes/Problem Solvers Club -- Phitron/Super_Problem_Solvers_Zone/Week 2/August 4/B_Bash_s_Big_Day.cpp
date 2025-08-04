/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 04/08/2025 (Monday)
 * Time       : 10:30
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

    int t;
    cin >> t;
    map<int,int>mp;
    int one = 0 ;

    for (int out = 0; out < t; out++)
    {
        int n;
        cin >> n;
        if(n == 1){
            one++;
        }

        map<int, int> cnt;
        for (int i = 2; i * i <= n; i++)
        {
            while (n % i == 0)
            {
                cnt[i]++;
                n /= i;
            }
        }

        if (n > 1)
        {
            cnt[n]++;
        }
        for (auto x  : cnt)
        {
            mp[x.first]++;
        }
    }
    int maax = INT_MIN;
    for(auto x : mp){
        maax = max(maax,x.second);
    }
    if(one == t){
        cout << 1 << endl;
    }
    else cout << maax << endl;

    // amader kon kon sonkha gula kon kon prime dia divisible hoy oita dekha lakbe ,
    // and jetar besi hobe oita rakhte hobe , karon duita prime nite parbo na

    return 0;
}