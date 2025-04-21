/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-21   14:32:02
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

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

        string s;
        cin >> s;

        int i = n - 1;

        stack<int> st;

        while (i >= 0)
        {
            if (s[i] == '0')
            {
                i--;
                int second = (int)s[i] - 48;
                i--;
                int first = (int)s[i] - 48;

                int number = (first * 10) + second;

                st.push(number);
                

                
                
            }
            else
            {
                int number = (int)s[i] - 48;
                st.push(number);
            }

            i--;
        }

        while (st.empty() == false)
        {
            int num = st.top();

            char c = '`' + num;

            cout << c;
            st.pop();
        }
        cout << '\n';
    }

    return 0;
}