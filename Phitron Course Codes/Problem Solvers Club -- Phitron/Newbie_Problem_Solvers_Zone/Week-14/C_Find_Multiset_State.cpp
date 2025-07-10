/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/07/2025 (Monday)
 * Time       : 20:13 
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
        int n , k ;
        cin >> n >> k ;


        vector<int >v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int>minn;
        minn = v;

        sort(minn.begin(),minn.end());


        long long sum = 0 ;

        for (int i = 0; i < k; i++)
        {
            sum = sum + v[i];
        }


        for (int i = k; i < n -1; i++)
        {
            cout << v[i] << " ";
        }
        cout << v[n-1] + sum << endl;
        
        


        
    }
    

    return 0;
}