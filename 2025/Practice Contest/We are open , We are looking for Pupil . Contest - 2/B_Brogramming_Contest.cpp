/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 14:41 
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
        int n ;cin >> n ;

        string s ;
        cin >> s;
        int cnt = 0 ;

        char crr ;
        if(s[0] =='1'){
            cnt++;
            crr = s[0];
        }
        else
        {
            cnt++;
            crr = s[0];
        }
        


        for (int i = 1; i < n; i++)
        {
            if(s[i]!=crr){
                cnt++;
                crr = s[i];
            }


        }

        if(s[0] == '0')
        {
            cout << cnt - 1 << endl;
        }        
        else
        {
            cout << cnt << endl;
        }
        

    }

    return 0;
}