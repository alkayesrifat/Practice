/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 15:54
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

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        set<int> st;

        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            mp[val]++;
            st.insert(val);
        }

        if (st.size() > 2)
        {
            cout << "No" << endl;
        }
        else if (st.size() == 1)
        {
            cout << "Yes" << endl;
        }
        else if (n == 2)
        {
            cout << "Yes" << endl;
        }

        else if(st.size() == 2 )
        {
            vector<int> v;
            for (auto x : mp)
            {
                v.push_back(x.second);
            }
            int first = v[0];
            int second = v[1];

            int ans = abs(first - second);
            // cout << ans << " ";
            if (ans <= 1)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
        
    }

    return 0;
}