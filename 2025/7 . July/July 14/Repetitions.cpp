/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/07/2025 (Monday)
 * Time       : 18:21 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ;
    cin >> s;

    char c = s[0];
    int cnt = 0 ;
    int maxx = INT_MIN;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == c)
        {
            cnt++;
            maxx = max(cnt,maxx);
        }
        else
        {
            maxx = max(cnt,maxx);
            cnt = 0 ;
            c = s[i];
            cnt++;
        }
        
        
    }
    cout << maxx ;
    

    return 0;
}