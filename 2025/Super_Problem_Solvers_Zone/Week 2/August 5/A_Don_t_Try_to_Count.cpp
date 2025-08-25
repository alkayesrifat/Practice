/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 16:22
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
        int n, m;
        cin >> n >> m;

        string a, b;
        cin >> a >> b;

        int cnt = 0;
        int maxx = max(n, m);

        string tes = a + a;

        while (cnt <= 6)
        {
            int ace = 0;
            int len = a.size() - (m - 1);
            if (a.size() >= m)
            {
                for (int i = 0; i < len; i++)
                {
                    string test = a.substr(i, m);
                    if (test == b)
                    {
                        ace = 1;
                        break;
                    }
                }
            }
            if (ace == 1)
                break;
            cnt++;
            a += a;
        }

        if (cnt == (6 + 1))
        {
            cout << -1 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }

    return 0;
}