/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/07/2025 (Thursday)
 * Time       : 06:31 
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
        int n ;
        cin >> n ;
        int v[n][n];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> v[i][j];
            }
            
        }

        int gap = 0 ;
        int sum = 0 ;

        int mai = 0;

        for (int i = 0; i < n; i++)
        {
            int minn = INT_MAX ;
            for (int j = i ; j < n;j++)
            {
                if (i < n && j < n)
                {
                    minn = min(minn,v[j][j-i]);
                    // cout << v[j][j-i] << " ";
                }
                
            }
            // cout << endl;
            if(minn < 0){
                sum = sum + abs(minn);
            }

            
        }

        for (int i = 1; i < n; i++)
        {
            int minn = INT_MAX ;
            for (int j = i ; j < n;j++)
            {
                if (i < n && j < n)
                {
                    minn = min(minn,v[j-i][j]);
                    // cout << v[j-i][j] << " ";
                }
                
            }
            // cout << endl;
            if(minn < 0){
                sum = sum + abs(minn);
            }
            
        }


        cout << sum << endl;
        

        
        
    }
    

    return 0;
}