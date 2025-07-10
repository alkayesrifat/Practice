/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   21:04:49
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void osama_bin_laden()
{

    int n;

    int child;

    cin >> n >> child;

    set<int> v;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        int remain = val % child;
        if (val >= child)
        {
            v.insert(remain);
        }
    }

    if (v.empty() == true)
    {
        cout << -1 << endl;
    }
    else
    {
        cout << *v.begin() << endl;
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        osama_bin_laden();
    }

    return 0;
}