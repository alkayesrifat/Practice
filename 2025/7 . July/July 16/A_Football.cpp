/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/07/2025 (Wednesday)
 * Time       : 05:54 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ;
    cin >> s ;

    int n = s.size();

    int a = 0;
    int b = 0 ;

   

    int cnt = 0 ;

    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0'){
            cnt++;
            if(cnt >= 7){
                a=1;
            }
        }
        else
        {
            cnt = 0 ;
        }
        
    }
    cnt = 0 ;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            cnt++;
            if(cnt >= 7){
                b=1;
            }
        }
        else
        {
            cnt = 0 ;
        }
        
    }

    if(a ==1|| b == 1){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    
    

    return 0;
}