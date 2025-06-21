/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/06/2025 (Thursday)
 * Time       : 15:57 
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
        
        string s ;
        cin >> s;

        int one = 0 ;

        int maxx = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                int cnt = 0;
                
                for (int j = i ; j < n; j++)
                {
                    if (s[j] == '1')
                    {
                        one++;
                        break;
                    }
                    cnt++;
                    i++;
                    
                }
                
                maxx = max(maxx,cnt);
                
            }
            
        }
        cout << one  + maxx<< endl;
        


    }
    

    return 0;
}