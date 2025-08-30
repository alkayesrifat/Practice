/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/08/2025 (Saturday)
 * Time       : 16:49 
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

    int n ;
    cin >> n ;
    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        int val;cin >> val;
        if(mp[val] == 0){
            mp[val] = i+1;
        }
    }

    for (int i = 1; i <= 3; i++)
    {
        /* code */
        if(mp[i]==0){
            cout << -1 << " ";
        }
        else
        {
            cout << mp[i] << " ";
        }
        
    }
    

    

    return 0;
}