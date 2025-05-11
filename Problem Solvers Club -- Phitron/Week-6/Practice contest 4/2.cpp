/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-06   20:08:27
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
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        long long int swap = 0;
        bool flag = false;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                swap =  x;
            }
            else if (s[i] == '0')
            {
                if (swap > 0)
                {
                    swap--;
                }
                else
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}