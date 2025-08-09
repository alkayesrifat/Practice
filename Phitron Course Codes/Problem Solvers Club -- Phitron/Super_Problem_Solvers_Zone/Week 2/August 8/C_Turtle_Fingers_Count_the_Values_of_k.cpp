/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/08/2025 (Friday)
 * Time       : 10:47
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll test_case;
    cin >> test_case;
    while (test_case--)
    {
        ll a, b, l;
        cin >> a >> b >> l;
       
        set<int> st;

        for (ll i = 0; i <= 20; i++)
        {
            for (ll j = 0; j <= 20; j++)
            {

                ll cal = (pow(a, i)) * (pow(b, j));
                if (cal > l)
                {
                    continue;
                }
                if (l % cal == 0)
                {
                    // cout << i << " " << j << endl;
                    ll val = l / cal;
                    st.insert(val);
                }
            }
        }

        cout << st.size() << endl;
    }

    return 0;
}