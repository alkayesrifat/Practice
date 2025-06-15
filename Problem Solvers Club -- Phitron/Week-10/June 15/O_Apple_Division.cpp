/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 15/06/2025 (Sunday)
 * Time       : 12:27 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

bool kth_bit(int n, int k) {
   return ((n >> k) & 1);
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ;
    cin >> n ;

    long long sum = 0;

    vector<long long int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        sum += v[i];
    }

    long long int maxnumber = 0;

    for (int i = 0; i < n; i++)
    {
        maxnumber = maxnumber + (1LL<< i);
    }

    // cout << maxnumber;

    long long int ans = LLONG_MAX;


    for (int i = maxnumber; i >= 0; i--)
    {
        long long crrsum = 0 ;
        for (int j = 0; j <= __lg(maxnumber); j++)
        {
            if (kth_bit(i,j))
            {
                crrsum += v[j];
            }
            
        }

        long long int baki = sum - crrsum;

        ans = min(ans, abs(baki - crrsum));

        
    }
    
    cout << ans;
    


    

    return 0;
}