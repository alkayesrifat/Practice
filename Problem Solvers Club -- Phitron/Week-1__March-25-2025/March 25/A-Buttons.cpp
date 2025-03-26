/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-25   06:59:56
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a , b ;
    cin >> a >> b;

    if (a == b)
    {
        cout << a + b;
    }
    if (a > b)
    {
        cout << a + (a-1);
    }
    else if(a < b)\
    {
        cout << b + (b - 1);
    }
    
    
    
    return 0;
}