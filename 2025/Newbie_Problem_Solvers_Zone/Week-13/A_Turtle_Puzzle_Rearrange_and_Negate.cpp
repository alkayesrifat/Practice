/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/06/2025 (Sunday)
 * Time       : 05:21 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >>t;

    while (t--)
    {
        int n ;
        cin >> n ;
        long long sum = 0 ;

        while (n--)
        {
            int val;
            cin >> val;
            sum = sum + abs(val);
        }

        cout << sum << endl;
        
    }
    

    return 0;
}