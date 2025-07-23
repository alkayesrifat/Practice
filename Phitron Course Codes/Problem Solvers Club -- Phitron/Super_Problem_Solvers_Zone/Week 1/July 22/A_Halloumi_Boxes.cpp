/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/07/2025 (Tuesday)
 * Time       : 15:24
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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int cnt = 0;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cnt++;
            }
        }

        if (cnt == 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            if (k <= 1)
            {
                cout << "NO" << endl;
                /* code */
            }
            else
            {
                cout << "YES" << endl;
            }
        }
    }

    return 0;
}