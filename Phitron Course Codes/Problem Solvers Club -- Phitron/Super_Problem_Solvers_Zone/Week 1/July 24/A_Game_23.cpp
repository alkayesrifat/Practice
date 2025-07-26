/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/07/2025 (Thursday)
 * Time       : 06:27 
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

    ll a , b ;
    cin >> a >> b;

    int r = -1 ;
    ll d = b / a ;

    if (b % a == 0 )
    {
        r = 0 ;

        while (d % 2 == 0)
        {
            d = d / 2 ;
            r++;
        }
        while (d % 3 ==0)
        {
            d = d/3;
            r++;
        }
        if (d != 1 )
        {
            r = - 1;
        }
        
        
        
    }

    cout <<r ;
    
    

    

    return 0;
}