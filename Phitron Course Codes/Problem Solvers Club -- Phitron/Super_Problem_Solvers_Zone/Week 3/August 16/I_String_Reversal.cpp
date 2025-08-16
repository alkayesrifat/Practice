/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 16:33 
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

    string s ;
    cin >> s;

    string r  = s;
    
    reverse(r.begin(),r.end());

    map<char,vector<int>>first;
    map<char,vector<int>>sec;

    for (int i = 0; i < n; i++)
    {
        first[s[i]].push_back(i);
        sec[r[i]].push_back(i);
    }
    
    // for(auto [x,y] : first){

    //     cout << x << " -> ";

    //     for(int b : y){
    //         cout << b << " ";
    //     }
    //     cout << endl;

    // }
    // for(auto [x,y] : sec){

    //     cout << x << " -> ";

    //     for(int b : y){
    //         cout << b << " ";
    //     }
    //     cout << endl;

    // }


    vector<int>ans(n);

    
    for( char i = 'a' ; i <= 'z' ;i++){
        for(int j = 0 ; j < first[i].size();j++){
            ans[sec[i][j]]=first[i][j];
        }
    }

    // for(auto a : ans){
    //     cout << a << " ";
    // }
    
    pbds<int>pbd;

    ll cnt = 0 ;
    for(int i = n-1;i >= 0 ; i--){

        cnt+=pbd.order_of_key(ans[i]);
        pbd.insert(ans[i]);
    }

    cout << cnt ;

    return 0;
}