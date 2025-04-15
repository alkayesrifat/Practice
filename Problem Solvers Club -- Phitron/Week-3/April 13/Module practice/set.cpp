/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-13   06:20:20
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    set<int> st;

    while (n--)
    {
        int val;
        cin >> val;

        st.insert(val);
    }

    cout << *st.find(5);

    return 0;
}