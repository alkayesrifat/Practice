/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 26/08/2025 (Tuesday)
 * Time       : 05:33 
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
        int n ;cin >> n ;
        vector<int>v(n);
        int cnt = 0 ;
        for(int i  = 0 ; i < n ; i++){
            cin >> v[i];
            if(v[i] %2 != 0){
                cnt++;
            }
        }

        if (cnt % 2 == 0)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        

    }

    return 0;
}