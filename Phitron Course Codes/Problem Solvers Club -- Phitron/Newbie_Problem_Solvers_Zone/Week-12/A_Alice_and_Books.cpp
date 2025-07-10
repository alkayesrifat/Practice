/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/06/2025 (Monday)
 * Time       : 11:38 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int maxx = INT_MIN;


        for (int i = 0; i < n - 1; i++)
        {
            maxx = max(maxx,v[i]);
        }

        cout << maxx + v[n-1] << endl;
        
        
    }
    

    return 0;
}