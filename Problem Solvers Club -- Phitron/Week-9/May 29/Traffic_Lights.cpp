/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-30   11:42:04
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int road, n;
    cin >> road >> n;

    set<int> st;

    st.insert(0);
    st.insert(road);

    multiset<int> ml;
    ml.insert(road);

    int crrmax = 0;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        auto it = st.upper_bound(val);

        int last = *it;

        it--;
        int first = *it;

        ml.erase(ml.find(last - first));

        int fistdif = abs(first - val);
        int lastdif = abs(val - last);

        ml.insert(fistdif);
        ml.insert(lastdif);

        st.insert(val);

        cout << *ml.rbegin() << " ";
    }

    return 0;
}
