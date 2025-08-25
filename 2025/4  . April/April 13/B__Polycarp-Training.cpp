/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-13   05:48:40
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
    int m = n;

    multiset<int> st;

    while (m--)
    {
        int nn;
        cin >> nn;
        st.insert(nn);
    }

    int daycount = 0;

    for (int i = 1; i <= n; i++)
    {

        auto it = st.lower_bound(i);

        if (it != st.end())
        {
            // cout << *it << endl;
            daycount++;

            st.erase(it);
        }
        else
        {
            break;
        }
    }

    cout << daycount;

    return 0;
}