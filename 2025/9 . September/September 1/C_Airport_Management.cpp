/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/09/2025 (Monday)
 * Time       : 20:05 
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
        int n ;cin >> n ;

        vector<int>v(n);
        vector<int>vv(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin >> vv[i];
        }

        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            mp[vv[i]]++;
        }

        
       
        int maxx = INT_MIN;

        for(auto x  : mp){
            maxx = max(maxx,x.second);
            // cout <<x << " " ;
        }
        cout << maxx << endl;
        
        

    }

    return 0;
}