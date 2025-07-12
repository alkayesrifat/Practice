/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/07/2025 (Friday)
 * Time       : 06:08 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;


bool cmp(const pair<int,int>&a ,const pair<int,int>&b){
    if (a.first == b.first)
    {
        return a.second > b.second;
    }
    else
    {
        return a.first < b.first;
    }
    
    
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;
        vector<pair<int,int>>v;
        while (n--)
        {
            int a , b ;
            cin >> a >> b ;
            v.push_back({a,b});
        }
        sort(v.begin(),v.end(),cmp);

        long long ans = 0 ;

        map<int,int>mp;
        

        for(auto x : v){

            if (mp[x.first] < x.first)
            {
                // cout << x.first << " " << x.second << " "  << endl;
                ans += x.second;
                mp[x.first]++;
                
            }
            
            
            
        }
        cout << ans << endl;
        
    }
    

    return 0;
}