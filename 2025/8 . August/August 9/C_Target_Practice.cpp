/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/08/2025 (Saturday)
 * Time       : 12:16
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
        char arr[10][10];
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cin >> arr[i][j];
            }
        }
        map<int, int> mp;

        int suru = 0;
        int ses = 9;

        for (int chole = 1; chole <= 5; chole++)
        {

            for (int i = suru; i <= ses; i++)
            {

                if (arr[suru][i] == 'X')
                {
                    mp[chole]++;
                }
            }
            for (int i = suru; i <= ses; i++)
            {

                if (arr[i][suru] == 'X')
                {
                    mp[chole]++;
                }
            }
            for (int i = suru; i <= ses; i++)
            {

                if (arr[i][ses] == 'X')
                {
                    mp[chole]++;
                }
            }
            for (int i = suru; i <= ses; i++)
            {

                if (arr[ses][i] == 'X')
                {
                    mp[chole]++;
                }
            }
            if (arr[suru][suru] == 'X')
            {
                mp[chole]--;
            }
            if (arr[suru][ses] == 'X')
            {

                mp[chole]--;
            }

            if (arr[ses][ses] == 'X')
            {
                mp[chole]--;
            }

            if (arr[ses][suru] == 'X')
            {
                mp[chole]--;
            }

            suru++;
            ses--;
        }
        ll ans = 0;
        for (auto x : mp)

        {
            ll crr = x.first * x.second;
            ans += crr;
        }
        cout << ans << endl;
    }

    return 0;
}