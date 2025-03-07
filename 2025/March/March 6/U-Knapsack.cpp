// Problem Link : https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U
/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-06   11:59:30
 * Source: 
 */


 #include<bits/stdc++.h>
 using namespace std;
 
 int weight[1005];
 int val[1005];
 int dp[1005][1005];
 
 int knapsack(int i , int max_weight){
 
     if (i < 0 || max_weight <= 0 )
     {
         return 0;
     }
     if (dp[i][max_weight] != -1)
     {
         return dp[i][max_weight];
     }
     
 
     if (weight[i] <= max_weight)
     {
         int option1 = knapsack(i-1,max_weight - weight[i]) + val[i];
         int option2 = knapsack(i-1,max_weight);
         dp[i][max_weight] = max(option1,option2);
         return dp[i][max_weight];
         
     }
     else
     {
 
        dp[i][max_weight] = knapsack(i-1,max_weight);
        
         return dp[i][max_weight];
         
     }
     
     
 }
 
 
 int main(){
 
     int n ;
     cin >> n ;
     int max_weight;
     cin >> max_weight;
     for (int i = 0; i < n; i++)
     {
         cin >> weight[i];
         cin >> val[i];
     }
  
 
     for (int i = 0; i <= n; i++)
     {
         for (int j = 0; j <= max_weight; j++)
         {
            dp[i][j] = -1;
         }
         
     }
     
 
     cout << knapsack(n-1,max_weight);
     
     
     
     return 0;
 }