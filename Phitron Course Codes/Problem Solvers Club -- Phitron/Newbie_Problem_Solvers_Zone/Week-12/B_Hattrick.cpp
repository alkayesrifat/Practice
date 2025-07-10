/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/06/2025 (Tuesday)
 * Time       : 22:06 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin  >> t;

    while (t--)
    {
        char  a ,b , c, d ,e,f;
        cin >> a >> b >> c >> d >>  e >> f;

        string s ;
        s = s + a+ b +c +d +e+f;
        int fond = 0 ;

        for (int i = 0; i <= 6 - 3; i++)
        {
            if (s[i] == 'W' && (s[i] == s[i + 1] && s[i+1] == s[i+2]))
            {
                fond = 1;
            }
            
        }

        if (fond == 1)
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