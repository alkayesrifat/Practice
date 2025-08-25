/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * ---------------------
 * Problem Link: 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    
    
    int t;
    cin >> t;
    
    while(t--){
        long long int n ;
        cin >> n;
        
        
        
        vector<int>v(n);
        
        for(int i =  0 ; i < n ; i++){
            cin >> v[i];
        }
        long long int ans = v[0] ;
        
        for(int i = 1 ; i < n ; i++){
            ans &= v[i];
        }
        
        cout << ans << endl;
        
        
    }

    


    return 0;
}





































