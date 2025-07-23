/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 06:16 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;
    int sum = 0 ;
    vector<int>v(n);

    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum+=v[i];

    }
    int half = sum / 2 ;

    int cnt = 0 ;

    sort(v.begin(),v.end());

    int crr = 0 ;

    for (int i = n-1; i >=0; i--)
    {
        if (crr > half)
        {
            break;
        }
        crr = crr + v[i];
        cnt++;
        
    }
    cout << cnt ;
    
  
    

    return 0;
}