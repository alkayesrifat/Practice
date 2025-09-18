/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/09/2025 (Thursday)
 * Time       : 10:17
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

    int alkayesrifat;
    cin >> alkayesrifat;
    while (alkayesrifat--)
    {
        int n, c, q;
        cin >> n >> c >> q;

        string s;
        cin >> s;

        while (c--)
        {
            ll a, b;
            cin >> a >> b;
            a--;
            b--;

            if (a >= 0 && b < (ll)s.size())
            {
                s += s.substr(a, b - a + 1);
            }
        }
     

        while (q--)
        {
            ll a;
            cin >> a ;
            a--;
            cout << s[a] << endl;
        }
    }

    return 0;
}