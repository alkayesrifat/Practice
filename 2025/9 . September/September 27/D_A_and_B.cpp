/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 27/09/2025 (Saturday)
 * Time       : 16:02 
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
        string s ;
        cin >> s;

        ll ans = LLONG_MAX;

        string target = "ab";

        for(auto x : target){

            ll crr = 0 ;

            vector<int>pos;

      
            for (int i = 0; i < n; i++)
            {
                if(s[i] == x){
                    pos.push_back(i);
               
                }
            }

            if(pos.empty()){
                ans=0;
                break;
            }

            int mid = pos[ pos.size()/2 ];
            
            
            for(int i = 0 ; i < pos.size();i++){

                int tp = mid + i - (int)pos.size()/2;
                crr += abs(tp - pos[i]);

                
            }
            ans = min(ans,crr);

          
            
        }
      
            cout << ans << endl;
      
        


    }

    return 0;
}