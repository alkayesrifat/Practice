/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   11:22:18
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> myprice(m);

    multiset<int> ms;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        ms.insert(val);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> myprice[i];
    }

    vector<int> ans;

    for (int i = 0; i < m; i++)
    {
        auto it = ms.upper_bound(myprice[i]);

        if (it == ms.begin()) {

            ans.push_back(-1);

        } else {

            --it;

            ans.push_back(*it);

            ms.erase(it);
            
        }
    }

    for (int x : ans)
    {
        cout << x << '\n';
    }

    return 0;
}