/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-26      12:16:53
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc172/tasks/abc172_b?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){


    string s;
    string t;

    cin >> s ;
    cin  >> t;

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            count ++;
        }
        

    }
    cout << count;

    
    return 0;
}