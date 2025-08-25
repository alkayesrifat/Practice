/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/07/2025 (Thursday)
 * Time       : 09:59 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

bool sq(ll n ){
    ll sqr = sqrtl(n);

    ll sum = sqr * sqr;
    if (sum == n)
    {
        return true;
    }
    return false;
    
}

bool prime(ll n){
    if(n == 1)return false;

    for(int i = 2 ; i * i <= n ; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        ll n ;
        cin >> n;

        if (sq(n)&&prime(sqrtl(n)))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        

    }

    return 0;
}