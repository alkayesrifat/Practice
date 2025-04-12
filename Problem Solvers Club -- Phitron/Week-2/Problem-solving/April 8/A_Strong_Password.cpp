/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-09   12:15:13
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        string s;
        cin >> s;

        int index = 0;
        int indecator = 0;
        for (int i = 0; i < s.size(); i++)
        {
            string sub = s.substr(i, 2);
            if (sub[0] == sub[1])
            {
                index = i + 1;
                indecator++;
                break;
            }
        }

        if (indecator > 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i == index)
                {
                    if (s[i] != 'z')
                    {
                        char ans = s[i] + 1;
                        cout << ans;
                    }
                    else
                    {
                        char ans = s[i] - 1;
                        cout << ans;
                    }
                }
                cout << s[i];
            }
                }
        else
        {
            cout << s;

            if (s[s.size() - 1] != 'z')
            {
                char ans = s[s.size() - 1] + 1;
                cout << ans;
            }
            else
            {
                char ans = s[s.size() - 1] - 1;
                cout << ans;
            }
        }

        cout << endl;
    }

    return 0;
}