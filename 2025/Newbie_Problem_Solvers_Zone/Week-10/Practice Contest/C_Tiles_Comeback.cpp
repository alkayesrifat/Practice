/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/06/2025 (Thursday)
 * Time       : 11:48
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
        int n, k;
        cin >> n >> k;

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        if (v[0] == v[n - 1])
        {
            int cnt = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                {
                    cnt++;
                }
            }

            if (cnt >=  k)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            int cnt = 0;
            int ind = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] == v[0])
                {
                    cnt++;
                    if (cnt == k)
                    {
                        ind = i;
                        break;
                    }
                    
                }
            }

           
            int cnt1 = 0;

            for (int i = ind + 1; i < n; i++)
            {
                if (v[i] == v[n - 1])
                {
                    cnt1++;
                }
            }

            if (cnt >= k && cnt1 >= k)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
            
            

            
        }
    }

    return 0;
}