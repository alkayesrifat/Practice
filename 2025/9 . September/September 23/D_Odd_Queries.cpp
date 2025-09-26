/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/09/2025 (Tuesday)
 * Time       : 16:02 
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
        int n , q ;
        cin >>  n >> q;

        vector<int>v(n);

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
            
        }

        for(int i = 1 ; i < n ; i++){

            v[i] = v[i] + v[i-1];

        }

        while (q--)
        {
            ll l , r , k ;        cin >> l >> r >> k ; l--;r--;
            ll notun = (r-l+1) * k;

            ll puran ;

            if(l == 0)puran=v[r];

            else puran = v[r] - v[l-1];

            ll curr = (v[n-1] - puran) + notun;

            // cout << v[n-1] <<" ";

            if(curr % 2 == 0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }


        }
        



    }

    return 0;
}