/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 05:27 
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
        vector<int>d(n);
        multiset<int>ml;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            d[i] = v[i];
        }
        sort(d.begin(),d.end());

        int mmax = d[n-1]; 
        int lmax = d[n-2];

        for (int i = 0; i < n; i++)
        {
            if (v[i] != mmax)
            {
                v[i] = v[i] - (mmax);
            }
            else
            {
                v[i] = v[i] - (lmax);
            }
            
            
        }

        // cout << mmax << " " << lmax << endl;

        for(auto x  : v){
            cout << x << " ";

        }
        cout << "\n";
        

        
    }
    

    return 0;
}