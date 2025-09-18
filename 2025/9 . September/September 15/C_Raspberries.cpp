/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/09/2025 (Wednesday)
 * Time       : 11:45
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
        int n, k;
        cin >> n >> k;

        int paici = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;

            if (val % k == 0)
            {
                paici = 0;
            }
            else
            {
                int te = k - (val % k);
                paici = min(paici, te);
            }
        }

        if (k == 4)
        {
            cout <<"asddddddddddd";

            if (paici == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << paici - 1 << endl;
            }
        }
        else
        {
            cout << paici << endl;
        }
    }

    return 0;
}