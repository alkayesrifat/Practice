/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/07/2025 (Tuesday)
 * Time       : 17:54
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
        double d, x, y;

        cin >> d >> x >> y;
        int cnt = 0;

        int dic = x;

        if (y >= x)
        {
            cout << 0 << endl;
        }
        else
        {
            while (1)
            {
                y--;
                cnt++ ;


                if ((dic * (100 - cnt*d) ) <= y*100)
                {
                    cout << cnt << endl;
                    break;
                }

                if (y <= 0 && (dic * (100 - cnt*d) )  > y*100)
                {
                    cout << -1 << endl;
                    break;
                }
                
                
                
                
            }
            
            

        }
    }

    return 0;
}