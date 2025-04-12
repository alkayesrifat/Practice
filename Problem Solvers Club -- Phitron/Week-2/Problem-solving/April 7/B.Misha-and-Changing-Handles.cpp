/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-07   14:56:28
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/501/B
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    map<string, string> real;
    map<string, string> ulta;

    for (int i = 0; i < n; i++)
    {
        string a, b;

        cin >> a >> b;

        if (ulta.find(a) != ulta.end())
        {
            string s = ulta[a];

            real[s] = b;

            ulta.erase(a);

            ulta[b] = s;
        }
        else
        {
            real[a] = b;
            ulta[b] = a;
        }
    }

    cout << real.size() << endl;

    for (auto [a, b] : real)
    {
        cout << a << " " << b << endl;
    }

    return 0;
}