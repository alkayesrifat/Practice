/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/07/2025 (Friday)
 * Time       : 10:02
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
        int n, m;
        cin >> n >> m;

        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        cin >> m;
        // cout << m << endl;

        int pos = 1;

        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] >= v[i + 1])
            {
                if ((m - v[i]) <= v[i + 1])
                {
                    v[i] = m - v[i];
                }
            }
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i+1])
            {
                pos = 0 ;break;
            }
            // cout << v[i] << " ";
            
        }

        // cout <<  endl;
        // cout << pos << endl;

        if (pos == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
        
    }

    return 0;
}