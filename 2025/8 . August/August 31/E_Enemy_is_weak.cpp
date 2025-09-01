/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/08/2025 (Sunday)
 * Time       : 10:06 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;// - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n ;cin >> n ;

    vector<ll>v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = 0;

    pbds<ll>r;
    pbds<ll>l;

    vector<ll>rr(n);
    vector<ll>lll(n);


    for (int i = 0; i < n; i++)
    {

        rr[i] = r.size() - r.order_of_key(v[i]);
        r.insert(v[i]);
        
    }

    for (int i = n-1; i >= 0; i--)
    {

        lll[i] = l.order_of_key(v[i]);
        l.insert(v[i]);
        
    }


    for (int i = 0; i < n; i++)
    {
         
        ans+=    1LL * lll[i] * rr[i];
    }
    cout << ans << endl;
    
    


    return 0;
}