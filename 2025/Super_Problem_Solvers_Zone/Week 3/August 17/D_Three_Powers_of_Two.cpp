/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/08/2025 (Monday)
 * Time       : 20:42 
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
        ll n ;
        cin >> n ;

        string s ;
        cin >> s;

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '1'){
                cnt++;
            }
        }

        if (n == 1)
        {
            cout << "NO" << endl;
            continue;
        }

        if (n == 2)
        {
            
            if(s[1] =='0'){
                cout << "NO" << endl;
                continue;
            }
            else
            {
                cout << "YES" << endl;
                continue;
            }
            
        }
        
        
        
        if(cnt > 3){

            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        

    }

    return 0;
}