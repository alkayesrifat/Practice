/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 08:48
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    vector<int>v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(),v.end());


    int ans = 0 ;
    if (k == 0)
    {
        ans = v[0]-1;
    }
    else
    {
        ans = v[k-1];
    }

    int cnt = 0 ; 

   

    for (int i = 0; i < n; i++)
    {
        if (v[i] <= ans)
        {
            cnt++;
        }
        
    }

    if(cnt != k || (ans < 1 || ans > 1000000000)){
        cout << -1 ;
    }
    else
    {
        cout << ans ;
    }
    
    
    

    
    

    return 0;
}