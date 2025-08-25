/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 18/08/2025 (Monday)
 * Time       : 15:19
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

    int n, m;
    cin >> n >> m;

    map<string, int> nor;
    map<string, int> pali;
    string itself = "";
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;

        string r = s;

        reverse(r.begin(), r.end());

        if (nor[r] > 0)
        {
            pali[r]++;
            nor[r]--;
        }
        if (r == s)
        {
            itself = r;
        }
        nor[s]++;
    }

    // for(auto x  :pali){
    //     cout << x.first << ' ' << x.second << endl;
    // }

    if (pali.size() >= 1)
    {
        if (itself.size() >= 1)
        {
            cout << (((m * pali.size()) * 2) + itself.size()) << endl;
        }
        else
        {
            cout << ((m * pali.size()) * 2) << endl;
        }

        if (pali.size() >= 1)
        {
            vector<string> v;
            for (auto x : pali)
            {
                cout << x.first;
                string r = x.first;
                reverse(r.begin(), r.end());
                v.push_back(r);
            }
            if (itself.size() >= 1)
            {
                cout << itself;
            }
            // for(int i = v.size() - 1 ; i >= 0 ;i++){
            //     cout << v[i];
            // }
            int si = v.size();

            for (int i = si - 1; i >= 0; i--)
            {
                cout << v[i];
            }
        }
        else if (itself.size() >= 1)
        {
            cout << itself.size() << endl;
            cout << itself << endl;
            /* code */
        }

        else
        {
            cout << 0 << endl;
        }
    }
    else if (itself.size() >= 1)
    {
        cout << itself.size() << endl;
        cout << itself << endl;
        /* code */
    }
    else
    {
        cout << 0 << endl;
    }

   

    return 0;
}