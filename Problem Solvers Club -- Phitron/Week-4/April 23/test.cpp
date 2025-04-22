/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-22   19:27:31
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

void s()
{

    int n;
    int k;
    cin >> n >> k;

    vector<char> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    int r = 0;

    set<int> st;

    int minn = k;

    while (l < n && r < n)
    {
        int flat = 0;

        if (v[r] == 'W')
        {
            st.insert(r);
        }
        if ((r - l) + 1 == k)
        {
            if (st.size() < minn)
            {
                minn = st.size();
            }
            flat = 1;
        }

        if (l == *st.begin())
        {
            if (st.empty() == false)
            {
                st.erase(l);
            }
        }
        if (flat == 1)
        {
            l++;
        }

        r++;
    }

    cout << minn << endl;
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