/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 19:51 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
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


        sort(v.begin(),v.end());

        cout << min({ (v[n-3] - v[0]), (v[n-1] - v[2])  ,   (v[n-2] - v[1] )   }) << endl;
        
    }
    

    return 0;
}