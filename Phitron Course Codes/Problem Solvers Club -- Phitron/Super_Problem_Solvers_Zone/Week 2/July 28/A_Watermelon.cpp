/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 12:38 
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

    if(n == 2 || n == 0){
        cout << "NO" << endl;
        
    }

    else if (n % 2 == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    

    return 0;
}