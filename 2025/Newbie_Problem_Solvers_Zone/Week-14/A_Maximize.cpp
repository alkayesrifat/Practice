/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/07/2025 (Monday)
 * Time       : 06:45 
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
        int n ;
        cin >> n;
        

        int maxg = INT_MIN;

        int maxi = INT_MIN;

        for (int i = 1; i < n; i++)
        {
            if (__gcd(i,n) + i >= maxg )
            {
                maxg = max(maxg,(__gcd(i,n) + i));
                maxi = max(maxi,i);
            }
            
        }

        cout << maxi  << endl;
        
        
    }
    

    return 0;
}