/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-07   09:17:24
 * Source: 
 */



 #include <bits/stdc++.h>
 using namespace std;
 
long long int dp[80];
 

 
 int main()
 {
 
     int n;
     cin >> n;
 
     for (int i = 0; i <= n; i++)
     {
         dp[i] = -1;
     }
 
     dp[0] = 0;
     dp[1] = 1;
     dp[2] = 1;
     dp[3] = 2;

     for (int i = 4; i <=n; i++)
     {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3] + dp[i -4 ];
     }

     cout << dp[n];
     
 
     return 0;
 }