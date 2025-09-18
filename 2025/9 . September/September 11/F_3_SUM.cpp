/**
 * All Praise to Allah
 * ---------------------
 * Author     : Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/09/2025 (Thursday)
 * Time       : 04:29
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

        map<int, int> mp;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            string sv = to_string(val);
            sv = sv[sv.size() - 1];
            val = stoi(sv);
            mp[val]++;
        }
        int paici = 0;

        vector<int> v;
        for (auto x : mp)
        {
            v.push_back(x.first);
            if (x.second >= 3)
            {
                ll re = x.first * 3;
                string s = to_string(re);

                s = s[s.size() - 1];

                if (s == "3")
                {
                    paici = 1;
                    break;
                }
            }
        }

        n = v.size();

        if (paici == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                for (int k = 0; k < n; k++)
                {
                    if (i != j && j != k && k != i)
                    {
                        int re = v[i] + v[j] + v[k];

                        string s = to_string(re);

                        s = s[s.size() - 1];

                        if (s == "3")
                        {
                            paici = 1;
                            break;
                        }
                    }
                }
            }
        }

        if (paici == 1)
        {
            cout << "YES" << endl;
            continue;
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && mp[v[i]] >= 2)
                {
                    ll re = v[i] + v[i] + v[j];
                    string s = to_string(re);

                    s = s[s.size() - 1];

                    if (s == "3")
                    {
                        paici = 1;
                        break;
                    }
                }
            }
        }

        if (paici == 1)
        {
            cout << "YES" << endl;
            continue;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}