/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/08/2025 (Tuesday)
 * Time       : 18:58
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

    int n, k, m;
    cin >> n >> k >> m;

    vector<int> v(200000);

    for (int i = 1; i <= n; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a]++;
        v[b + 1]--;
    }




    for(int i = 1 ; i <= 200000;i++){
        v[i] = v[i] + v[i-1] ;
    }

    


    return 0;
}