/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-27   06:22:37
 * ---------------------
 * Problem Link: 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    long long int sum = 0;

    int n ;
    cin >> n ;

    long long int minimum = INT_MAX;

    while (n--)
    {
        long long int num;
        cin >> num;
        sum = sum + num;
        
        if (num % 2 != 0)
        {
            minimum = min(minimum,num);
        }
        
        
    }
    
    
    if (sum % 2 == 0)
    {
        cout << sum;
    }
    else
    {
        cout << sum - minimum;
    }
    
    

    return 0;
}