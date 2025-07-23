/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 16/07/2025 (Wednesday)
 * Time       : 05:38 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b ;

    int ace =  (max(a,b) );

    if (ace == 1)
    {
        cout << 1 << '/' << 1;
    }
    
    else if (ace == 2)
    {
        cout << 5 << '/' << 6;
    }
    else if (ace == 3)
    {
        cout << 2 << '/' << 3;
    }
    else if (ace == 4)
    {
        cout << 1 << '/' << 2;
    }
    else if (ace == 5)
    {
        cout << 1 << '/' << 3;
    }
    else if (ace == 6)
    {
        cout << 1 << "/" << 6;
    }
    

    
    



    return 0;
}