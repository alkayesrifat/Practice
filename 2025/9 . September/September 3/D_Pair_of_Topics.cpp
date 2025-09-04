/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/09/2025 (Wednesday)
 * Time       : 10:36
 * ---------------------
 */

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>; // - Use 'less<T>' for set, 'less_equal<T>' for multiset
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<ll> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        v[i] = a[i] - v[i];
    }

    pbds<int> pbd;

    ll cnt = 0;
    for (int i = n - 1; i >= 0; i--)
    {

        int val = v[i];
        if (val >= 1)
        {
            int hobe = (-1 * val) + 1;
            int ace = pbd.size() - pbd.order_of_key(hobe);
            cnt += ace;
            
        }
        else if (val < 0)
        { 
            int hobe = abs(val) + 1 ;
            int ace = pbd.size() - pbd.order_of_key(hobe);
            cnt += ace;
           
        }
        else
        {
            int hobe = abs(val) + 1 ;
            int ace = pbd.size() - pbd.order_of_key(hobe);
            cnt += ace;
            
            
        }
        
        pbd.insert(v[i]);
    }
    cout << cnt << endl;

    return 0;
}