/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/08/2025 (Tuesday)
 * Time       : 06:12 
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

    int n ,q  ;
    cin >> n  >> q;

    vector<int>v(n+1);

    for(int i  = 1 ; i <= n ; i++){
        cin >> v[i];
    }

    vector<int>dif(n + 2 );

    for (int i = 1; i <= q; i++)
    {
        
        int a , b, x;
        cin >> a >> b >> x;

        dif[a]+=x;
        dif[b+1]-=x;
    }

    vector<int>pref(n+1);

    for (int i = 1; i <= n ; i++)
    {
        pref[i] = pref[i-1] + dif[i];
    }

    for (int i = 1; i <= n; i++)
    {
        cout <<v[i] + pref[i] << " ";
    }
    

  




    return 0;
}