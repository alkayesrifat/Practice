/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   16:14:27
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void s()
{

    int n;
    int m;
    cin >> n >> m;

    string s;
    cin >> s;

    set<int> v;

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        v.insert(val);
    }

    string c;
    cin >> c;

    sort(c.begin(), c.end());

    int ind = 0;

    for (int x : v)
    {

        s[x - 1] = c[ind];
        ind++;
    }

    cout << s << endl;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        s();
    }

    return 0;
}