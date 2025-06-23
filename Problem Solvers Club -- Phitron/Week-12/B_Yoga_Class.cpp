/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/06/2025 (Sunday)
 * Time       : 19:27 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin >> t;

    while (t--)
    {
        int n , x , y;
        cin >> n >> x >> y ;

        if (n %2 == 0)
        {
            long long xx = (n * x);
            long long yy = ( (n/2)*y);

            cout << max(xx,yy) << endl;
        }
        else
        {
            long long xx = (n * x);

            long long yy = ( (n/2)*y);

            yy = yy + x;

            cout << max(xx,yy) << endl;
            
        }
        
        
    }
    

    return 0;
}