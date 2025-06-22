/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/06/2025 (Saturday)
 * Time       : 11:04
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
        int n;
        cin >> n;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >>v[i];
        }

        int minn = INT_MAX ;

        for (int i = 0; i < n; i++)
        {
            set<int>st;
            for (int j = i; j < n; j++)
            {
                st.insert(v[j]);
                if (st.size() == 2)
                {
                    minn = min ( (j - i) + 1 , minn);
                    // cout << i << " " << j << endl;
                    break;
                }
                
            }
            
        }

        if (minn == INT_MAX)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << minn << endl;
        }
        
        
        
        
    }

    return 0;
}