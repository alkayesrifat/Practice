/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 17/07/2025 (Thursday)
 * Time       : 12:18 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;

        vector<int>v(n);

        int one = -1 ; int ma = -1;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];

            if(v[i] == 1)one=i+1;
            if(v[i] == n )ma = i+1;
        }


        if (one == n)
        {
            cout << one-1 << " " << ma << endl;
        }
        else
        {
            /* code */
        }
        

        
        
    }
    

    return 0;
}