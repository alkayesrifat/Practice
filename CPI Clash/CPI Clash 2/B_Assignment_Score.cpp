/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/06/2025 (Sunday)
 * Time       : 11:07 
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
        cin >> n ;

        int sum = 0 ;

       
        for(int i = 0 ; i < n ;i++)
        {
            int val;
            cin >> val;

            sum += val;
        }

        int need = 0.5 * (100 * (n + 1));

        if (need - sum > 100)
        {
            cout << -1 << endl;
        }
        else if (need - sum < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << need - sum << endl;
        }
        
        
        
        
    }
    

    return 0;
}