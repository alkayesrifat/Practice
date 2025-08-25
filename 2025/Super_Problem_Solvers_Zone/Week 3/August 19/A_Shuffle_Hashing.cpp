/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/08/2025 (Tuesday)
 * Time       : 18:52 
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
        string s;
        string q ;
        cin >> s >> q;

        sort(s.begin(),s.end());

        int jamu = q.size() - (s.size()-1);

        int found = 0 ;

        for(int i  = 0 ; i <jamu ;i++){
            string sub = q.substr(i,s.size());
            sort(sub.begin(),sub.end());
            if(sub == s){
                found = 1;
                break;
            }
        }

        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        

    }

    return 0;
}