/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 10/07/2025 (Thursday)
 * Time       : 14:20 
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

        vector<int>v(n);
        vector<int>pref(n);

        int lastz = -5;
        long long sum = 0 ;


        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum = (sum + v[i])%3;
            pref[i] = sum ;
            if(sum == 0)lastz = i;
        }

        // for (int i = 0; i < n; i++) {
        //     cout << pref[i] << " ";
        // }
        // cout << endl;


        if (lastz == -5)
        {
            cout << "YES" << endl;
            continue;
        }
        if (lastz == n-1)
        {
            cout << "NO" << endl;
            continue;
        }


        map<int,int>mp;
        int found = -9;


        for (int i = 0; i < n; i++)
        {
            if (i > lastz)
            {
                if (mp[pref[i]] == 0)
                {
                    found = 8;break;
                }
                
            }


            mp[pref[i]]++;
            
        }
        
        
        if (found == 8)
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