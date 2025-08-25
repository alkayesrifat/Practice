/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/08/2025 (Friday)
 * Time       : 14:58 
 * ---------------------
 */

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;// If you want to use the pbds as a multiset then  after null_type here insted of less use less_equal
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ;
    cin >> n >> m ;

    pbds<int>v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.insert(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;

        cout << v.order_of_key(val+1) << " ";
    }
    
    

    return 0;
}