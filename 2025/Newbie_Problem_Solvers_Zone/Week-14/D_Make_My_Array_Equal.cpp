/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/07/2025 (Monday)
 * Time       : 20:23 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n ;

        vector<int>v(n);

        int cnt = 0 ;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] > 1)
            {
                cnt++;
            }
            
        }

        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            int first = v[0];
            int alada =  0 ;

            for (int i = 1; i < n; i++)
            {
                if (v[i] != first)
                {
                    alada = 1 ;
                    break;
                }
                
            }
            if (alada == 1)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
            
            
        }
        
        


        
    }
    

    return 0;
}