/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 04/07/2025 (Friday)
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
        int one, two;
        cin >> one >> two;

        if (one % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            if (two % 2 == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                if (one == 0)
                {
                    cout << "NO" << endl;
                }
                else
                {
                    cout << "YES" << endl;
                }
                
                
            }
                
            
        }
        
        
        
    }

    return 0;
}