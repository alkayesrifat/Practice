/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/09/2025 (Monday)
 * Time       : 20:24
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
        vector<int> v(3);
        int cnt = 0;
        for (int i = 0; i < 3; i++)
        {

            cin >> v[i];
            if (v[i] == 0)
            {
                cnt++;
            }
        }

        ll besi = 0;

        for (int i = 0; i < 3; i++)
        {
            for (int j = i + 1; j < 3; j++)
            {

                if (v[i] > 1 && v[j] > 1)
                {
                    besi++;
                    v[i]--;
                    v[j]--;
                }
            }
        }

        cout << besi + (3 - cnt) << endl;
    }

    return 0;
}