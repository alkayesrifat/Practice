/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/06/2025 (Tuesday)
 * Time       : 22:27 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >>t;

    while (t--)
    {
        int n ;
        cin >> n ;


        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int poss = 1 ;

        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                if (i == n-1 )
                {
                    poss = 0;
                    
                }
                
                
                
            }
            
        }

        if (poss == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
        
        
    }
    

    return 0;
}