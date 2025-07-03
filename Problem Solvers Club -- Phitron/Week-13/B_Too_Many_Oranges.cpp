/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/06/2025 (Monday)
 * Time       : 19:50 
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
        int n , k ;
        cin >>  n >> k;

       

        vector<int>comb = {10,11,12,21,22,23};
        int f = 0 ;

        for (int i = 0; i < comb.size(); i++)
        {
            if (k % comb[i] == 0)
            {
                f = 1; break;
            }
            
        }

        if (f == 0)
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