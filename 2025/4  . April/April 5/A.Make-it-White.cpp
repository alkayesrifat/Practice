/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-05   17:37:15
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1927/A
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
    
        string s;
        cin >> s;
    
        int first_black = -1;
        int last_black = -1;
    
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'B' )
            {
                if (first_black == -1)
                {
                    first_black = i;
                }
                
                last_black = i;
                
                
                
            }
            
        }
        if (first_black == last_black)
        {
            cout << 1 <<"\n";
        }
        
        else
        {
            cout << (last_black - first_black) + 1  << "\n";
            
        }
         
    }
    

    return 0;
}