/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/08/2025 (Tuesday)
 * Time       : 07:38 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    
    int n ;
    cin >> n ;
    map<int,int>mp;

    for(int i  = 0 ; i < n ; i++){
        int a, b ;
        cin >> a >> b;

        mp[a]++;
        mp[b+1]--;
    }

    int flag = 1;
    ll sum = 0 ;
    for(auto x : mp){

        sum+= x.second;

        if(sum > 2){
            flag = 0;
            break;
        }

    }
    if(flag){
        cout << "Yes" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    

    return 0;
}