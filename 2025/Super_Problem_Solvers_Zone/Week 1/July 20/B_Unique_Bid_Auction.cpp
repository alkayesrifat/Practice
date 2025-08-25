/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/07/2025 (Sunday)
 * Time       : 20:22 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;
    while (t--)
    {
        int n ;cin >> n ;

        map<int,int>mp;
        set<int>st;
        map<int,int>koy;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val] = i+1;
            koy[val]++;
            st.insert(val);
        }

        int mi = 0 ;

        for(auto x  : st){
            if(koy[x] == 1 ){
                mi = 1;
                cout << mp[x] << endl;
                break;
            }
        }

        if (mi == 0)
        {
            cout << -1 << endl;
        }
        
        
        
        
        
    }
    

    return 0;
}