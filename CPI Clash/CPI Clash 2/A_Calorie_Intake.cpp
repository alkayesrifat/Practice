/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/06/2025 (Sunday)
 * Time       : 11:01 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b, c ;
    cin >> a >> b >> c;

    if ( a - (b*c) < 0)
    {
        cout << -1 << endl;
    }
    else
    {
        cout <<  a - (b*c);
    }
    
    

    return 0;
}