/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/08/2025 (Monday)
 * Time       : 19:11 
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
        for(int i = 0 ;i < n ;i++){
            cin >> v[i];
        }

        int a = 0 ;int b = 0 ;
        int minn = INT_MAX;

        int sor = 0 ;

        for( int i  = 0 ; i < n -1 ;i++){
            if(v[i] > v[i+1]){
                sor = 1;
            }
            if(v[i+1] - v[i] < minn){
                minn = v[i+1] - v[i];
                a = v[i] ;b = v[i+1];
            }
        }
        int cnt = 0 ;

        if(sor == 1){
            cout << 0 << endl;
            continue;
        }

        if ((b-a)+1 % 2 ==0)
        {
            cnt = ((b-a)+1)/2;
        }
        else
        {
            cnt = ((b-a)+2)/2;
        }
        
        

        cout << cnt << endl;
        


        

    }

    return 0;
}