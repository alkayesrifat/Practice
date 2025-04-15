/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-14   18:57:00
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
        string s;
        cin >> s;
        int count = 0;

        int index = 0;

        for (int i = s.size() - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                count++;
            }
            else
            {
                index = i;
                break;
            }
        }

        for (int i = 0; i < index; i++)
        {
            if (s[i] != '0')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}