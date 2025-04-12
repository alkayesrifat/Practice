/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-07   17:38:34
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1722/C
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;
    while (testcase--)
    {
        int n;
        cin >> n;

        map<string, vector<int>> mp;
        int m = 3;
    
        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                string s;
                cin >> s;
                mp[s].push_back(i);
            }
        }
    
        vector<int> ans(m + 1);
        
    
        for (auto [x,y] : mp)
        {
    
            vector<int>just = y;
            if (just.size() == 1)
            {
                
                
                ans[just[0]] += 3 ;
                
                
            }
            if (just.size() == 2 )
            {
                
                ans[just[0]]++;
                ans[just[1]]++;
            }
            
            
        }
        for (int i = 1;i <= m;i++) {
            cout << ans[i] << " ";
        }
        cout << '\n';
    
    
    }



    return 0;
}