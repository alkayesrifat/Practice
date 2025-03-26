/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-25   06:16:29
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a ;
    int b ;
    cin >> a >>b;

    if (a > b)
    {
        cout << "0";
    }
    else if (a == b)
    {
        cout << "1";
    }
    else
    {
        cout << ( b - a ) + 1;
    }
    
    
    

    
    return 0;
}