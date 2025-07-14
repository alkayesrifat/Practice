/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/07/2025 (Monday)
 * Time       : 18:14 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n ;
    cin >> n ;

    long long as = (n*(n+1))/2;

    long long sum = 0 ;

    n--;
    while (n--)
    {
        int val;cin >> val;
        sum+=val;
    }
    
    cout << as - sum;

    return 0;
}