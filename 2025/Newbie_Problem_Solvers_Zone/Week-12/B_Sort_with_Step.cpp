/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/06/2025 (Friday)
 * Time       : 12:14 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >>t;


    while (t--)
    {
        int n , k ;cin >> n >> k ;

        vector<int>v(n+1);
        int cnt = 0 ;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];

            if (v[i] % k == i % k)
            {
                continue;
            }
            cnt++;
            
        }

        if (cnt == 0)
        {
            cout << 0 << endl;
        }
        else if (cnt == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        
        
        
    }
    

    return 0;
}

