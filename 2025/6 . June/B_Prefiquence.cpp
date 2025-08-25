/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/06/2025 (Monday)
 * Time       : 06:08
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;
    string a, b;
    cin >> a >> b;

    int ind = 0 ;
    int k = 0 ;

    for (int i = 0; i < n; i++)
    {
        int found = 0 ;
        for (int j = ind; j < m ; j++)
        {
            if (a[i] == b[j])
            {
                // cout << i << " " << j << endl;
                found = 1;
                k++;
                ind = j + 1;
                break;
            }
          
            
        }
        if (found == 0)
        {
            break;
        }
        
        
    }

    cout << k << endl;
    

    
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}