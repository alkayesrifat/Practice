/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/06/2025 (Sunday)
 * Time       : 19:36 
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
        int cnt = 0 ;

        string s ;cin >> s;

        for (int i = 0; i < n ; i++)
        {
            if (i + 4 < n && s.substr(i,5) == "mapie")
            {
                cnt++;
                i = i + 4;
            }
            else if (i + 2 < n &&  s.substr(i,3) == "pie")
            {
                cnt++;
                i = i + 2;
            }
            else if(i + 2 < n &&  s.substr(i,3) == "map")
            {
                cnt++;
                i = i + 2 ;
            }
            
            
            
            
        }
        
        cout << cnt << endl;
        
    }
    

    return 0;
}