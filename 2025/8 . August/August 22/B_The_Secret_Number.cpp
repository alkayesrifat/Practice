/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/08/2025 (Friday)
 * Time       : 11:23
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
        ll n;
        cin >> n;

        ll val = 10;

        vector<ll> ans;

        while (val <= n)
        {
            if (n % (val + 1) == 0)
            {
                ans.push_back((n / (val + 1)));
            }
            val *= 10;
        }

        cout << ans.size() << endl;

        if (ans.size() >= 1)
        {
            sort(ans.begin(), ans.end());
            for (auto x : ans)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }

    return 0;
}