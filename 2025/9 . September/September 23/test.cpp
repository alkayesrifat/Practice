/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/09/2025 (Tuesday)
 * Time       : 21:25 
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
        string s,  q;
        cin >> s >> q;

        if(s[0] != q[0] || q.size() <= s.size()){
            cout << "NO" << endl;
            continue;
        }

        map<char,int>mp;

        for(auto x : q){
            mp[x]++;
        }

        int d = 0 ;

        for(auto x : s){
            if(mp[x] == 0){
                d = 1 ;
                break;
            }
        }

        if( q.size() >= 2 && q[0] == q[1]){
            d = 1;
        }
        if(d == 1){
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        

    }

    return 0;
}