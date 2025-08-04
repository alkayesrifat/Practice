/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 12:50 
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

    int n , k ;
    cin >> n  >>  k ;

    vector<int>v( n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }


    int our = v[k-1];

    int cnt = 0 ;
    for (int i = 0; i <n; i++)
    {

        if (v[i] >= our && v[i] >= 1)
        {
            cnt++;
            /* code */
        }
        
        /* code */
    }

    cout << cnt << endl;
    
    

    return 0;
}