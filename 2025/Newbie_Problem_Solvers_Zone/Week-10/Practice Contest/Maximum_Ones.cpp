/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/06/2025 (Thursday)
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
        int n ,  k ; 
        cin >> n >> k ;


        string s ; cin >> s;

        int cnt = 0 ;

        int one = 0 ;

        int zero_chageable = 0 ;

        for (int i = 0; i < n; i++)
        {
           if (s[i] == '1')one++;
        }
        


        for (int i = n - 1 ; i >= 0  ; i--)
        {
            
            if (s[i] == '1')
            {
                if ((i >= 0) && s[i -1 ] == '0')
                {
                    s[i - 1 ] = '1';
                    zero_chageable++;
                }
                
            }
            
            
        }
        int ans = 0 ;
        for (int i = 0; i < k; i++)
        {
            if (zero_chageable > 0)
            {
                ans++;
                zero_chageable--;
            }
            
        }

        cout << ans + one << endl;
        
        
    }
    

    return 0;
}