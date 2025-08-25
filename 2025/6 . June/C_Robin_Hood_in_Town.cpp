/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 04/07/2025 (Friday)
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
        int n ; cin >> n ;

        long long sum = 0;
        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum += v[i];
        }

        int avr = sum / n ;
        int halfavr = sum / (n*2);

        int cnt = 0 ;

        for (int i = 0; i < n; i++)
        {
            
            if (v[i] < halfavr)
            {
                cnt++;
            }
            
        }

        

        if (n < 3)
        {
            cout << -1 << endl;
        }
        else
        {
            if (cnt > 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << "Asdf" << endl;
            }
            
            
        }
        
        
        



        
        
        
        
        
        
    }
    

    return 0;
}