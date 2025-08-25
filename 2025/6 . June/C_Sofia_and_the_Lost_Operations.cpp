/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/07/2025 (Tuesday)
 * Time       : 14:54
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

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        int k;
        cin >> k;

        map<int, int> mp;
        vector<int> d(k);

        int last = 0;

        for (int i = 0; i < k; i++)
        {
            cin >> d[i];
            mp[d[i]]++;
            if (i == k - 1)
            {
                last = d[i];
            }
        }
    

        int flag = 0 ;

        for (int i = 0; i < n; i++)
        {
            if (b[i] == last)
            {
                flag = 1;
            }
            
        }

        if (flag == 0)
        {
            /* code */

            cout << "NO" << endl;
            continue;
        }

        int f = 0 ;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != b[i])
            {
                if (mp[b[i]] == 0)
                {
                    f = 1;
                    break;
                }
                else
                {
                    mp[b[i]]--;
                }
                
                
            }
            
        }

        if (f == 0)
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