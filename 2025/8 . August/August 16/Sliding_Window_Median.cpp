/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/08/2025 (Saturday)
 * Time       : 06:25
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

    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    
    int l = 0;
    int r = 0;
    
    pbds<pair<int, int>> p;
    while (r < n)
    {
        p.insert({v[r], r});
        int c = r - l + 1;

        if (c == k)
        {

            int ind = k / 2;
            if (k % 2 == 0)
            {
                ind--;
                /* code */
            }
            

            auto val = p.find_by_order(ind);

            cout << val->first << " ";

            p.erase({v[l], l});

            l++;
        }
        r++;
    }

    return 0;
}