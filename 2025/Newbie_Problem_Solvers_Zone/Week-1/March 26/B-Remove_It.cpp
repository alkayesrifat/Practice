/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-26   12:09:59
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc191/tasks/abc191_b?lang=en
 */

#include<bits/stdc++.h>
using namespace std;

int main(){


    int n ;
    cin >> n;

    int x ;
    cin >> x ;

    vector<int>arr;

    for (int i = 0; i < n; i++)
    {
        int num ;
        cin >> num;

        if (num != x)
        {
            arr.push_back(num);
        }
        
    }

    for (auto i = arr.begin(); i != arr.end(); i++)
    {
        cout << *i << " ";
    }
    
    

    
    return 0;
}