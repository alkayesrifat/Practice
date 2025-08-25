/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/08/2025 (Saturday)
 * Time       : 11:55 
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

        vector<ll>v(n);
        int two = 0 ;
        int one = 0 ;


        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if (v[i] == 2)
            {
                /* code */
                two++;
            }
            else
            {
                one++;
            }
            
            
            
        }


        if (two % 2 == 0 && two != 0)
        {
            int ordhek = two /2;

            for (int i = 0; i < n; i++)
            {
                if (v[i] == 2)
                {
                    ordhek--;
                    if (ordhek <= 0)
                    {
                        cout << i+1 << endl; break;
                    }
                    
                }
                
            }
            
        }
        else if (one == n )
        {
            cout << 1 << endl;
        }
        
        else
        {
            cout << -1 << endl;
        }
        


      
        
        


    }

    return 0;
}