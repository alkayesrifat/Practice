/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 19:20 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n ;cin >> n ;

    string s ;
    cin >> s;

    int one  = 0 ; int zero = 0 ;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            zero++;
        }
        else
        {
            one++;
        }
        
        
    }

    if (zero == n || one == n)
    {
        cout << 2 << endl;
    }
    else
    {
        if (zero %2 ==0 )
        {
            if (n % 2 ==0)
            {
                cout << n << endl;
            }
            else
            {
                cout << n-1 << endl;
            }
            
            
        }
        else
        {
            if (n % 2 ==0)
            {
                cout << n-1 << endl;
            }
            else
            {
                cout << n << endl;
            }
        }
        
        
    }
    
    
    





}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        solve();
    }
    

    return 0;
}