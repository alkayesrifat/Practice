/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/07/2025 (Sunday)
 * Time       : 15:03 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;cin >> t;

    while (t--)
    {
        int n , f, k ;
        cin >> n >> f >> k ;
        map<int,int>mp;

        vector<int>v(n);

        for (int i = 0; i < n ; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }

        int fkoto = v[f - 1 ];

        sort(v.begin(), v.end(), greater<int>());

        int find = 0 ;
        int cnt = 0;
        for (int i = k; i < n; i++)
        {
            /* code */

            if (v[i] == fkoto)
            {
                cnt++;
            }
            
        }

        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
        else if (cnt == mp[fkoto])
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
        
        
        
        
        
        
        
    }
    

    return 0;
}