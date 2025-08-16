/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/08/2025 (Tuesday)
 * Time       : 07:14 
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

    int n ,  q ;
    cin >> n >> q;

    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int>d(n+1);
    for (int i = 0; i < q; i++)
    {
        int l ,  r;
        cin >> l >> r;

        l-- ; r--;

        d[l]++;
        d[r+1]--;
    }
    

    for(int i  = 1 ; i < n ; i++){
        d[i] = d[i]+d[i-1];
    }
    
    sort(v.rbegin(),v.rend());
    sort(d.rbegin(),d.rend());


    ll ans = 0 ;

    for (int i = 0; i < n; i++)
    {
        ans+= (1ll * v[i] * d[i]);
    }
    cout << ans << endl;
    
    

    return 0;
}