/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-05   19:33:42
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/44/A
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 


    int n ;

    cin >> n ;
    cin.ignore();
    set<string>s;


    for (int i = 0; i < n+1; i++)
    {
        string ss;
        getline(cin,ss);
        s.insert(ss);
    }

    cout << s.size()-1;

    
    
    

    


    return 0;
}