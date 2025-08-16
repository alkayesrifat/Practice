/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 06:18 
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
        int  n;
        cin >> n ;

        if (n % 2 == 0)
        {
            int ans  = n/2;
            n=n/2;
            if (n % 2 ==0)
            {
                n--;
            }
            ans+= (n/2)+1;
            cout << ans << endl;
            
        }
        else
        {
            cout << (n/2)+1 << endl;
        }
        
        

    }

    return 0;
}