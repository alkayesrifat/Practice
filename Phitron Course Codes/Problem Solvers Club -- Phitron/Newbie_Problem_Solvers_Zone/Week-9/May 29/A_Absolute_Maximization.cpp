/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-29   07:26:22
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n);

        int fist;
        cin >> fist;
        v[0] = fist;

        long long int orr = fist;
        long long int andd = fist;

        for (int i = 1; i < n; i++)
        {
            cin >> v[i];
            orr = orr | v[i];
            andd = andd & v[i];
        }

        cout << orr - andd << endl;
    }

    return 0;
}