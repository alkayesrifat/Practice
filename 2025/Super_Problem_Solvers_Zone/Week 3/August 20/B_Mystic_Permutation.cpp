/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 20/08/2025 (Wednesday)
 * Time       : 11:21
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
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 1)
        {
            cout << -1 << endl;
            continue;
        }
        
        
        

        vector<int> s = v;

        sort(s.begin(), s.end());

        vector<int> ans(n);

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (v[i] != s[j] && s[j] != -9)
                {
                    ans[i] = s[j];
                    s[j] = -9;
                    break;
                }
            }
        }

        if (ans[n-1] == 0)
        {
            
            
            ans[n-1] = n;
            swap(ans[n-1],ans[n-2]);
            
            
            
        }
        

        for (auto x : ans)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}