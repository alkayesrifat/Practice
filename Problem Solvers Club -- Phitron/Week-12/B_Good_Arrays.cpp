/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/06/2025 (Monday)
 * Time       : 07:28 
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

        int one = 0;

        long long sum = 0 ;
        

        for (int i = 0; i < n; i++)
        {
            int val;cin >> val;
            if(val == 1)one++;
            sum += val;
        }

        if (n == 1)
        {
            cout << "NO" << endl;continue;
        }

        if (sum < one + n)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
        
        
    }
    

    

    return 0;
}