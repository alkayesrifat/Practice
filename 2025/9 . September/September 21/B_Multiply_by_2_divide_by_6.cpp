/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/09/2025 (Sunday)
 * Time       : 11:53
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
        ll n;
        cin >> n;

        int two = 0 ;
        int three = 0 ;

        while (n > 0 && n % 3 ==0)
        {
            three++;
            n=n/3;
            /* code */
        }
        while (n > 0 && n % 2 ==0)
        {
            two++;
            n=n/2;
            /* code */
        }

        if (n >1 || two > three)
        {
            cout << -1 << endl;
            /* code */
        }
        else
        {
            cout <<three + (three - two) << endl;
        }
        
        

        
        
        
    }

    return 0;
}