/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/09/2025 (Monday)
 * Time       : 06:04
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

        vector<set<int>> v(n);

        vector<int> f(m + 1);

        for (int i = 0; i < n; i++)
        {
            int si;
            cin >> si;
            set<int> st;
            for (int j = 0; j < si; j++)
            {
                int val;
                cin >> val;
                st.insert(val);
                f[val]++;
            }
            v[i] = st;
        }

        int siz = 0;

        for (auto x : f)
        {
            if (x >= 1)
            {
                siz++;
            }
        }

        if (siz == m)
        {

            int cnt = 0;

            
            for (int i = 0; i < n; i++) {
               
                for (int x : v[i]) {
                    f[x]--;
                    if (f[x] == 0) siz--;
                }

                if (siz == m) cnt++;

             
                for (int x : v[i]) {
                    if (f[x] == 0) siz++;
                    f[x]++;
                }

                if (cnt >= 2) break;
            }

            if (cnt >= 2)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}