/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/08/2025 (Sunday)
 * Time       : 10:38 
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

    int n , m , q;
    cin >> n >> m >> q;

    map<int,int>mp;

    for (int i = 0; i < n; i++)
    {
        int a , b ;
        cin >> a >> b ;

        
        mp[a]++;
        mp[b+1]--;
    }

    vector<int>ra;

    for(auto x  : mp){
        cout << x.first << " -> " << x.second << endl;
        ra.push_back(x.first);
    }

    
    
    

    return 0;
}