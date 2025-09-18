/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/09/2025 (Saturday)
 * Time       : 21:10
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
        int n, m;
        cin >> n >> m;
        int prev = 0;
        int post = 0;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a, b;
            cin >> a >> b;

            if (b == post)
            {
                int val = a- prev;
                if (val % 2 == 0)
                {
                }
                else
                {
                    val--;
                }

                ans += val;
            }
            else
            {

                int val =a - prev;
                if (val % 2 != 0)
                {
                }
                else
                {
                    val--;
                }
                ans += val;
            }

            prev = a;
            post = b;

            /* code */
        }
        ans += (m - prev);
        cout << ans << endl;
    }

    return 0;
}