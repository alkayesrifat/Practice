/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/07/2025 (Tuesday)
 * Time       : 09:42 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  t;
    cin >> t ;


    
    while (t--)
    {
        map<char,int>mp;
        
        int n ;cin >> n ;

        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

        }
        vector<char>ans(n); int ind = 0;


        for (int i = 0; i < n; i++)
        {
            if (v[i] == 0)
            {
                char  a = 'a' + ind;  ind++;
                ans[i] = a;
                mp[a]++;
            }
            else
            {
                for(auto x : mp){
                    if(x.second == v[i]){
                        ans[i] = x.first;
                        mp[x.first]++;
                        break;
                    }
                }
            }
            
            
        }

        for(auto x : ans){
            cout << x ;
        }
        cout << endl;



        
        


        
    }
    

    return 0;
}