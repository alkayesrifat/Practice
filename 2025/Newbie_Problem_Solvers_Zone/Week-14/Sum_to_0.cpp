/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/07/2025 (Saturday)
 * Time       : 19:21 
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
        int  n ;
        cin >> n ;

        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            if (n %2 == 0)
            {
                for (int i = 0; i < n / 2; i++)
                {
                    cout << 1 << " " << -1 << " ";
                }
                
            }
            else
            {
                for (int i = 0; i <( n / 2) - 1; i++)
                {
                    cout << 1 << " " << -1 << " ";
                }
                cout << 2 << " " << -1 << " " << -1 ;
            }
            cout << endl;
            
        }
        
        
    }
    

    return 0;
}