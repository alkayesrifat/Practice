/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/07/2025 (Wednesday)
 * Time       : 15:25 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ,  k ; 
    cin >> n >> k ;

    vector<int>v(n);
    vector<int>b(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int first  = -1 ;

    long long sum = 0 ;
    
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];

        if (b[i] != 0)
        {
            sum = sum + v[i];
            
        }
        

    }
    
    cout << sum ;

    

    return 0;
}