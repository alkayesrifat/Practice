/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/07/2025 (Saturday)
 * Time       : 09:26 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s , t ;cin >>  s >> t;
    int n = s.size();
    int m = t.size();

    vector<int>v(n);
    for(int i = 0 ; i < n ; i++)cin>>v[i];

    auto ok = [&](int mid){

        vector<int>del(n+1);
        for(int i = 0 ; i < mid;i++)del[v[i]] = 1;


        int j = 0 ;
        bool found = false;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == t[j] && del[i+1] != 1){
                j++;
            }
            if(j == m){
                found = true;
                break;
            }
        }
        


        return found;
    };


    int l = 0 , r = n , ans=0 ,mid;

    while (l <=r)
    {
        mid = l + (r-l)/2;

        if (ok(mid))
        {
            ans = mid;
            l = mid+1;

        }
        else
        {
            r = mid-1;
        }
        
        
    }
    cout << ans;
    




    return 0;
}