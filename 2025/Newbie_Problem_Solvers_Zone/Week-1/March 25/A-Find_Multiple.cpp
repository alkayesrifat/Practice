/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-25   06:33:12
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int a , b , c;
    cin >> a >> b >> c;

    int flag = 0 ; 

    for (int  i = 0; i < 1000 ; i++)
    {
        if (c * i >= a && c * i <=b)
        {
            cout << c * i ;
            flag = 1;
            break;
        }
        if (c * i > b && flag == 0)
        {
            cout << -1;
            break;
        }
        
        
    }
    

    
    return 0;
}