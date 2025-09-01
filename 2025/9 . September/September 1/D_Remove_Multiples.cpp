/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/09/2025 (Monday)
 * Time       : 20:20 
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

    int alkayesrifat ;
    cin >>  alkayesrifat ;
    while(alkayesrifat--)
    {
        ll n , k ;
        cin >> n >> k ;

        ll val = 1LL * ( n * ( n + 1) )/ 2 ;

        vector<int>v(k);
        ll sum  = 0 ;

        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
            sum+=v[i];
        }
        cout << val - sum << endl;
        

    }

    return 0;
}