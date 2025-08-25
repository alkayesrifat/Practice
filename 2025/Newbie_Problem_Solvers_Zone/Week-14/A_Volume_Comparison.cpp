/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/07/2025 (Monday)
 * Time       : 20:01 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a , b , c ,x ;
    cin >> a >> b >> c >>x ;

    if (((a*b)* c) > (pow(x,3)))
    {
        cout << "Cuboid" << endl;
    }
    else if (((a*b)* c) < (pow(x,3)))
    {
        cout << "Cube" << endl;
    }
    else
    {
        cout << "Equal" << endl;
    }
    
    
    

    return 0;
}