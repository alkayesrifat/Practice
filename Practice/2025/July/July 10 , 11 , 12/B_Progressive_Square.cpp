/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/07/2025 (Friday)
 * Time       : 08:02
 * ---------------------
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
        int n, b, c;
        cin >> n >> b >> c;
        int N = n * n;
        vector<int> v(N);
        map<int, int> mp;
        int minn = INT_MAX;

        for (int i = 0; i < N; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
            minn = min(minn, v[i]);
        }

        map<int, int> lakbe;

        int flag = 0;

        int num = minn;

        for (int i = 1; i <= n; i++)
        {
            int crr = num;
            for (int j = 1; j <= n; j++)
            {
                lakbe[crr]++;
                crr = crr + c;
            }
            num = num + b;
        }

        for(auto x : lakbe){
            if (mp[x.first] != x.second)
            {
                flag = 1;
                break;
            }
            // cout << x.first << ' ' << x.second << endl;

        }
        // for (auto x : mp)
        // {

        //     cout << x.first << ' ' << x.second << endl;
        // }

        if (flag == 1)
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