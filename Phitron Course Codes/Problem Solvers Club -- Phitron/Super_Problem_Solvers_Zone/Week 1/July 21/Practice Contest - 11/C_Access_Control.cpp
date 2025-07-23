/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 20:09
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
        int n, x;
        cin >> n >> x;

        string s;
        cin >> s;

        if (s[0] == '0')
        {
            cout << "NO" << endl;
            continue;
        }
        int have = 0;
        int f = 0;

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '1')
            {
                have = x;
            }
            else
            {
                if (have <= 0)
                {
                    f = 1;
                    break;
                }
                have--;
            }
        }
        if (f == 1)
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