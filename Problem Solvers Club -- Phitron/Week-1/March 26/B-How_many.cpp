/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-26   12:31:51
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;
    int t;
    cin >> t;

    int it = max(n,t);                    int count = 0;

    for (int i = 0; i <= it ; i++)
    {
        for (int j = 0; j <= it ; j++)
        {
            for (int k = 0; k <= it ; k++)
            {
                if ((i + j + k ) > n && (i * j * k) > t )
                {
                    break;
                }
                else if((i + j + k ) <= n && (i * j * k) <= t ){
                    count++;
                }
                
            }
        }
    }

    cout << count;
    

    
    return 0;
}