/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/07/2025 (Friday)
 * Time       : 20:30 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<char,int>mp;
    mp['q'] = 9; mp['Q'] = 9;
    mp['r'] = 5; mp['R'] = 5;
    mp['b'] = 3; mp['B'] = 3;
    // mp['k'] = 3; mp['K'] = 3;
    mp['p'] = 1; mp['P'] = 1;
    mp['N'] = 3 ; mp['n'] = 3;


    int n = 8;

    int sumb = 0 ;
    int sums = 0 ;

    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            char a ;
            cin >>a ;

            if (a != '.')
            {
                if (a >= 'a' && a<='z')
                {
                    sumb = sumb + mp[a];
                }
                else
                {
                    sums = sums + mp[a];
                    
                }
                
                
            }
            
        }
        
    }
    if (sumb > sums)
    {
        cout << "Black" << endl;
    }
    else if (sumb < sums)
    {
        cout << "White" << endl;
    }
    else
    {
        cout << "Draw" << endl;
    }
    
    
    
    



    return 0;
}