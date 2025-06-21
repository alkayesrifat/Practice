/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/06/2025 (Monday)
 * Time       : 09:42 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n , m;
        cin >> n >> m ;

        string s ;cin >> s;

        map<char,int>mp;

        for (int i = 0; i < n; i++)
        {
            mp[s[i]]++;
        }

        string need = "ABCDEFG";
        int cnt = 0 ;

        for (int i = 0; i < 7; i++)
        {
            if(mp[need[i]] < m){
                cnt = cnt + (m - mp[need[i]]);
            }
        }

        cout << cnt << endl;
        
        
    }
    

    return 0;
}