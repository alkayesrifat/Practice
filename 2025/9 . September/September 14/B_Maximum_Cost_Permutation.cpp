/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/09/2025 (Monday)
 * Time       : 21:16
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
        int n;
        cin >> n;

        vector<int> v(n + 1);
        int cnt = 0;
        int zero = 0;
        ll sum = 0;

        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
            if (v[i] == 0)
            {
                zero++;
            }
            sum += v[i];
        }

        if (zero == 1)
        {

            ll nsum = (n * (n + 1)) / 2;

            int val = nsum - sum;

            int f = INT_MAX;
            int l = INT_MIN;
            int akr = 0;

            for (int i = 1; i <= n; i++)
            {
                if (v[i] == 0)
                {
                    v[i] = val;
                }

                if (v[i] != i)
                {
                    akr++;

                    f = min(f, i);
                    l = max(l, i);
                }
            }
            if (akr == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << l - f + 1 << endl;
            }
        }
        else
        {
            
            int f = INT_MAX;
            int l = INT_MIN;
            for (int i = 1; i <= n; i++)
            {
                if (v[i] != i || v[i] == 0)
                {
                    f = min(f, i);
                    l = max(l, i);
                }
            }
            if(f == INT_MAX || l == INT_MIN || f == l){
                cout << 0 << endl;
            }
            else
            {
                
                cout << l - f + 1 << endl;
            }
            

        }
    }

    return 0;
}