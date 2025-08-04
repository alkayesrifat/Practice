/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 08:56
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

    int cnt = 0 ;

    
    for (int number = 1; number <= n; number++)
    {
        int then = number;
        map<int, int> mp;
        for (int i = 2; i * i <= n; i++)
        {
            while (then % i == 0)
            {
                mp[i]++;
                then/=i;
                
            }
        }
        if(then > 1){
            mp[then]++;
        }

        if (mp.size() == 2)
        {
            cnt++;
        }
        

    }
    cout << cnt;

    return 0;
}