/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/08/2025 (Monday)
 * Time       : 20:17 
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

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        int n ;
        cin >> n ;

        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        sort(v.rbegin(),v.rend());

        ll ans = v[0];
        int cnt = 1;

        for(int i  = 1 ; i < n ;i++){
            cnt++;

            ll pare = v[i] * cnt;

            

            

            ans = max(pare,ans);
        }
        cout << ans << endl;
        

    }

    return 0;
}