/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/08/2025 (Thursday)
 * Time       : 10:33
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

    int n, k, q;
    cin >> n >> k >> q;

    vector<int> v(200005);

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;

        v[a]++;
        v[b + 1]--;
    }

    vector<int> pref(200005);

    for (int i = 1; i <= 200000; i++)
    {
        pref[i] = v[i] + pref[i - 1];
    }

    vector<int> ans;
    for (int i = 0; i <= 200000; i++)
    {
        if (pref[i] >= k)
        {
            ans.push_back(i);
        }
    }

    for (int i = 1; i <= q; i++)
    {
        int a, b;
        cin >> a >> b;

        auto alow = lower_bound(ans.begin(), ans.end(), a);
        auto blow = upper_bound(ans.begin(), ans.end(), b);

        cout << blow - alow << endl;
    }

    return 0;
}