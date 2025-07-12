/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 07:36 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ;
    cin >> s;
    int n = s.size();

    int ab = 0 ;int ba = 0 ;

    for (int i = n - 1 ; i > 0; i--)
    {
        if (ba == 0 && (s[i]=='A' && s[i-1] == 'B'))
        {
            ba = 1;
            i = i - 1;
        }
        else if (ab == 0 && (s[i]=='B' && s[i-1] == 'A'))
        {
            ab=1;
            i = i - 1;
        }
        
        
    }

    // cout << ab << " " << ba;

    if (ab == 1 && ba == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    
    

    return 0;
}