/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/07/2025 (Monday)
 * Time       : 18:00 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n ;
    cin >> n ;

    while (n!= 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2 ;
        }
        else
        {
            n = (n * 3) + 1;
        }
        
        
    }
    cout << 1;
    

    return 0;
}