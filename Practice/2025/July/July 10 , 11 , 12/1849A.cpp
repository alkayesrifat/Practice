/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 17:53 
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
        int b , c , h ;
        cin >> b >> c  >> h ;
        int filling = c + h ;
        
        if (b <= filling)
        {
            cout << b + (b - 1) << endl;
        }
        else
        {
            cout << filling + (filling + 1) << endl;
        }
        
        
    }
    

    return 0;
}