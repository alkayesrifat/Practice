/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/08/2025 (Monday)
 * Time       : 20:01
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
        string s;
        cin >> s;

        string d = "ADVITIYA";

        int cnt = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != d[i])
            {

                if (s[i] > d[i])
                {
                    int cl = s[i] - d[i];
            

                    cnt += cl;
                }
                else{

                    int cl = d[i] - s[i];
                    int cl2 = ('Z' - s[i]) + 1 ;

                    cnt += min(cl, cl2);

                }
            }
        }

        cout << cnt << endl;
    }

    return 0;
}