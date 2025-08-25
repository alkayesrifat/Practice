/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/06/2025 (Sunday)
 * Time       : 06:09 
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
        long long sum = 0;
        int n ;
        cin >> n ;
        int paici = 0;

        while (n--)
        {
            int val;cin >> val;
            sum = sum + val;
            if(val % 3 == 1)paici = 1;

        }

        if (sum % 3 == 0)
        {
            cout << 0 << endl;
        }
        else if (sum %  3 == 2)
        {
            cout << 1 << endl;
        }
        else
        {
            if (paici == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
            
            
        }
        
        
        
        
    }
    

    return 0;
}