/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/06/2025 (Monday)
 * Time       : 22:36 
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
        int n , x , y ;
        cin >> n >> x >>y ;

        string s ;cin >> s;

        int p1 = 0 , p2 = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == 'R')p1++;
            else if(s[i] == 'L')p1--;
            else if(s[i] == 'D')p2--;
            else p2++;
        }

        // cout << p1 << " " << p2 << endl;

        int total = abs(p1-x) + abs(p2-y);

        if (total == n)
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