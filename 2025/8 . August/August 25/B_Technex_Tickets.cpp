/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/08/2025 (Monday)
 * Time       : 20:10
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

        int cnt = 0;

        if(n == 2){
            cout << 2 << endl;
            continue;
        }
        if (n % 2 != 0)
        {
            while (n > 0)
            {
                if (n == 1 || n == 3)
                {
                    cnt++;
                    break;
                }
                n -= 2;
            }
        }
        else
        {
            cnt = (n-2);
            cnt = cnt / 2 ;
            cnt+=2;
        }
        

        cout << cnt << endl;
    }

    return 0;
}