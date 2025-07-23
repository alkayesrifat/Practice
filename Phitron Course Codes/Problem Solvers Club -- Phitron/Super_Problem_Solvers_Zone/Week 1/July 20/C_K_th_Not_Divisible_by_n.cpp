/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/07/2025 (Sunday)
 * Time       : 12:18 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;cin >> t;

    while (t--)
    {
        int n  , k ;
        cin >> n >> k ;

        ll l  = 1 , r = 1e18,mid , ans ;
        
        while (l <=r )
        {
            mid = l + (r - l)/2;
            if (mid-(mid/n)>= k)
            {
                ans = mid;
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
            
            
        }

        cout << ans  << endl;
        
    }
    

    return 0;
}