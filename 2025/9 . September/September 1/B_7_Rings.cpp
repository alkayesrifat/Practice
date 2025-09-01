/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/09/2025 (Monday)
 * Time       : 20:02 
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
        ll a , b ;
        cin >> a >> b;

        ll su = 1LL* a * b;

        string s  = to_string(su);
        if(s.size() == 5){
            if(s[0] != '0'){
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
            
        }
        else
        {
            cout << "NO" << endl;
        }
        

    }

    return 0;
}