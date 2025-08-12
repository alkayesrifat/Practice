/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/08/2025 (Monday)
 * Time       : 19:21
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

        vector<int> a(n);

        vector<int> b(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin >> b[i];

            if (a[i] < b[i])
            {
                swap(a[i], b[i]);
            }
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        int anai = -1;
        int bnai = -1;
        int chole = 0;

        // for (int i = 0; i < n; i++)
        // {

        //     if (a[i] != chole && anai == -1)
        //     {
        //         anai = chole;
        //     }
        //     if (b[i] != chole && bnai == -1)
        //     {
        //         bnai = chole;
        //     }
        //     chole++;
        // }
        // chole++;
        // if (anai == -1)
        // {
        //     anai = chole;
        // }
        // if (bnai == -1)
        // {
        //     bnai = chole;
        // }

        // cout << max(anai, bnai) << endl;
    }

    return 0;
}