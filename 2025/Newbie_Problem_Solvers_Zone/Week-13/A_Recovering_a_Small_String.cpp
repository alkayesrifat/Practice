/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/07/2025 (Tuesday)
 * Time       : 12:31 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<char,int>mp;
    vector<char>v(26);

    for (int i = 0; i < 26; i++)
    {
        char a = i + 'a';
        mp[a] = i + 1;
        v[i] = a;
    }

    // for (auto it : mp) {
    //     cout << it.first << " " << it.second << endl;
    // }

    int t ;
    cin >>t;

    while (t--)
    {
        int n;
        cin >> n ;

        int paici = 0 ;

        for (int i = 0; i < 26; i++)
        {
            if(paici == 1)break;
            for (int j  = 0; j < 26; j++)
            {
                if(paici == 1)break;
                for (int k = 0; k < 26; k++)
                {
                    if(paici == 1)break;
                    int sum = mp[v[i]] + mp[v[j]] + mp[v[k]];
                    if(sum == n){
                        cout << v[i] << v[j] << v[k] << endl;
                        paici = 1;
                        break;
                    }
                }
                
            }
            
        }
        
    }
    
    

    return 0;
}