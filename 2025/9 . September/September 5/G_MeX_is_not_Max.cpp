/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/09/2025 (Saturday)
 * Time       : 12:36 
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
        int n ;
        cin >> n ;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());

        if(v[0] != 0){
            cout << 0 << endl;
            continue;
        }
        int ans = -1;

        for (int i = 0; i < n; i++)
        {
            if(v[i] != i){
                ans = i;
                break;
            }
            
        }

        if (ans == -1)
        {
            cout << n << endl;
        }
        else
        {
            cout << ans << endl;
        }
        
        
        
        

    }

    return 0;
}