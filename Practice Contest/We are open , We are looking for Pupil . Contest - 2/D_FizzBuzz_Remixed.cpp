/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 15:08 
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

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        

        ll cnt = (n/15) * 3;

        cnt = cnt + 1 ;

        ll parinai = n % 15 ;

        for (ll i = (n-parinai); i <= n ; i++)
        {
            if(i % 3 == i % 5 ){
                cnt++;
            }
        }
        

        cout << cnt-1 << endl;
        

    }

    return 0;
}

