/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/07/2025 (Friday)
 * Time       : 20:09 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        string s ;
        cin >> s;

        int ace = 0 ;

        for (int i = 0; i < n -2; i++)
        {
            if (s[i] == '.' && s [ i + 1] == '.' && s[i + 2] == '.')
            {
                ace = 1;
            }
            
        }

        if (ace == 1)
        {
            cout << 2 << endl;
        }
        else
        {
            int cnt = 0 ;
            for (int i = 0; i < n; i++)
            {
                if (s[i] == '.')
                {
                    cnt++;
                }
                
                /* code */
            }
            cout << cnt << endl;
            
        }
        
        
        

    }

    return 0;
}