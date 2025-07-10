/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/06/2025 (Monday)
 * Time       : 08:45 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;
        string s ;
        cin >> s;

        int cnt = 0 ;
        

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '@'){
                cnt++;
            }
            if (s[i] == '*')
            {
                if (i < n - 1 && s[i + 1] == '*')
                {
                    break;
                }
                
            }
            
        }
        cout << cnt << endl;
        
    }
    

    return 0;
}