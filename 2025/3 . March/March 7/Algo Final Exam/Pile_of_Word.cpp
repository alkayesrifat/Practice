/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-07   15:48:58
 * Source: 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string ss;
        cin >>ss;
        sort(s.begin(),s.end());
        sort(ss.begin(),ss.end());
        if (s == ss)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
        
        
    }
    
    return 0;
}