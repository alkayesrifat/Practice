/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/07/2025 (Monday)
 * Time       : 20:05 
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
        int n , d ;
        cin >> n >> d;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int crr = 1;

        int cnt = 0 ;

        for (int i = 0; i < n; i++)
        {
            if (v[i] <= d)
            {
                if (crr != 1)
                {
                    cnt++;
                    crr = 1;
                }
                
            }
            else
            {
                if (crr != 2)
                {
                    cnt++;
                    crr = 2;
                }
                
            }
            
            
        }

        cout << cnt << endl;
        
        
    }
    

    return 0;
}