/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/06/2025 (Monday)
 * Time       : 12:44 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n ;cin >> n ;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int ans = INT_MAX ;

        for (int i = 0; i < n - 1; i++)
        {
            ans = min(ans,max(v[i],v[i+1]));
        }

        cout << ans -1 << endl;
        
        
    }
    

    return 0;
}