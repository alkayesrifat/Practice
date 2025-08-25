/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/08/2025 (Saturday)
 * Time       : 11:16
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        int sobek = 0;
        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }

        sort(v.rbegin(), v.rend());

        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[0])
            {
                sobek = 1;
            }
        }

        if (sobek == 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            
            map<int,int>bad;

            for(auto x : v){
                if(mp[x]==0){
                    cout <<x <<" ";
                    mp[x]++;
                }
                else
                {
                    bad[x]++;
                    
                }
                
            }

            for(auto x : bad){
                for(int i =0;i<x.second;i++){
                    cout << x.first <<" ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}