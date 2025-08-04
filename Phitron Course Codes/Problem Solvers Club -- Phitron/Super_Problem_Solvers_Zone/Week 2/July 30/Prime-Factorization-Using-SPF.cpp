/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/07/2025 (Wednesday)
 * Time       : 09:13 
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
    int n ;cin >> n ;

    
    map<int , int >mp;

    for (int i = 2; i * i <= n ; i++)
    {
        
        while (n % i == 0)
        {
            mp[i]++;
            n/=i;
        }
        
    }

    if (n > 1)
    {
        mp[n]++;
    }

    for(auto x  : mp){

        cout << x.first << " -> " << x.second << endl;
    }
    
    

    return 0;
}