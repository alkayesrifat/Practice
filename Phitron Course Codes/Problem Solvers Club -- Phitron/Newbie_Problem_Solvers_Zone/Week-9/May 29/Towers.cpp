/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-29   16:00:46
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        auto it = upper_bound(v.begin(), v.end(), t);

        if (it == v.end())
        {
            v.push_back(t);
        }
        else
        {
            *it = t;
        }
    }

    cout << v.size();

    return 0;
}