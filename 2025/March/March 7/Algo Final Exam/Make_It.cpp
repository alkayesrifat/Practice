/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-07   10:22:07
 * Source:
 */

#include <bits/stdc++.h>
using namespace std;
int dp[100005];
bool make(int i, int target)
{

    if (target == i)
    {
        return true;
    }
    if (i > target)
    {
        return false;
    }
    if (dp[i] != -1)
    {
        return dp[i];
    }
    bool l =  make(i + 3 , target);
    bool r =  make(i * 2 , target);

    dp[i] = l || r;
    return dp[i];
    
    
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i <= n; i++)
        {
            dp[i] = -1;
        }
        
        if (make(1,n))
        {
            cout  << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        
    }

    return 0;
}