/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 08/07/2025 (Tuesday)
 * Time       : 16:58
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
            cin >> v[i];
        }

        for (int i = 1; i < n - 1; i++)
        {

            if (v[i] >= 2)
            {
                if (v[i - 1] >= 1 && v[i + 1] >= 1)
                {
                    int minn = min(v[i - 1], v[i + 1]);

                    int koybar = v[i] / 2;

                    if (koybar > minn)
                    {
                        v[i] = v[i] - (2 * minn);
                        v[i + 1] = v[i + 1] - minn;
                        v[i - 1] = v[i - 1] - minn;
                    }
                    else if (koybar < minn)
                    {
                        v[i] = v[i] - (2 * koybar);
                        v[i + 1] -= koybar;
                        v[i - 1] -= koybar;
                    }
                    else
                    {
                        v[i] = v[i] - (2 * minn);
                        v[i + 1] = v[i + 1] - minn;
                        v[i - 1] = v[i - 1] - minn;
                    }
                }
            }
        }

        int all = 0 ;

        for(auto x : v){
            if (x != 0)
            {
                all = 1 ;
                break;
            }
            
        }
        if (all == 0)
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