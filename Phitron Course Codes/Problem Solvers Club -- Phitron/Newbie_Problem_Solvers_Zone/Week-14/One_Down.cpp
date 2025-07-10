/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/07/2025 (Saturday)
 * Time       : 19:42 
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

        string s   ,t ;
        cin >> s >> t ;

        if(s == t){
            cout << "Yes" << endl;
            continue;
        }

        int firstpos = 1 ;

        int s1 = 0 ;
        int s0 = 0 ;
        int t1 = 0 ; int t0 = 0 ;
        int omil = 0 ;

        

        for (int i = 0; i <n ; i++)
        {
            if (s[i] != t[i])
            {
                omil++;
            }
            
            if (s[i] == '0')s0++;
            else s1++;
            if(t[i] == '0')t0++;
            else t1++;

            if(s[i] == '0' && t[i] == '1')firstpos = 0;
            
            
            
        }

        // cout << s << " " <<t << endl;

        // cout << firstpos << endl;


        if(firstpos == 0){
            cout << "No" << endl;
            
        }
        else
        {
            if (omil % 2 == 0)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            
            
        }
        



        

    }
    

    return 0;
}