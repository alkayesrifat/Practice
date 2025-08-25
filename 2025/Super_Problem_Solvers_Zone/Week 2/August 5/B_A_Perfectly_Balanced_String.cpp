/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 11:55
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        string s;
        cin >> s;

        int all = 0;
        char first = s[0];
        int paici = 0;
        set<char> st;
        for (int i = 0; i < s.size() - 1; i++)
        {
            st.insert(s[i]);
            st.insert(s[i + 1]);

            if (s[i] != first)
                all = 1;

            if (s[i] == s[i + 1])
            {
                paici = 41;
            }
        }
        if (s[s.size() - 1] != first)
            all = 1;

        if (all == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (st.size() > 3)
            {
                cout << "NO" << endl;
            }
            else if (st.size() == 3 && s.size() != 3)
            {
                cout << "NO" << endl;
            }

            else if (paici == 41)
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}