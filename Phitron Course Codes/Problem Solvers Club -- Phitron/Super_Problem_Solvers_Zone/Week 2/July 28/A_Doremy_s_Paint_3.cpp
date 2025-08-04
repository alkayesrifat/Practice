/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 13:01
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
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (n == 2)
        {
            cout << "YES" << endl;
        }
        else if (n == 3)
        {

            if (v[0] == v[1] || v[0] == v[2] || v[1] == v[2])
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }

        else
        {

            sort(v.begin(), v.end());
            int f = 0;

            for (int i = 0; i < n - 2; i++)
            {
                if (v[i] + v[i + 1] == v[i + 1] + v[i + 2])
                {
                }
                else
                {
                    /* code */
                    f = 1;
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
    }

    return 0;
}