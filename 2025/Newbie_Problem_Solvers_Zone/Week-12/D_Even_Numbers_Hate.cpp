/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/06/2025 (Tuesday)
 * Time       : 22:39 
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

        vector<int>v(n);
        int odd = 0 ;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] % 2 != 0)
            {
                odd++;
            }
            
        }

        if (odd == 0 )
        {
            cout << 0 << endl;
        }
        else
        {
            int ans = n ;
            odd--;

            if(odd == 0){
                cout << ans << endl;
            }
            else if (odd % 2 == 0)
            {
                ans = ans - (odd / 2);
                // cout << "asdf" ;
                cout << ans << endl;
            }
            else
            {
                
                ans = ans - ((odd / 2) + 1) ;
                cout << ans << endl;
                
            }
            
            
        }
        
        
    }
    

    return 0;
}