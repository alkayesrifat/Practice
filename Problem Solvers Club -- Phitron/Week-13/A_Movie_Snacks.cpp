/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 30/06/2025 (Monday)
 * Time       : 19:40 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b , c;
    cin >> a >> b >> c;

    int one = (a*2 )+ (b * 3);

    int two = min(3*c , (2* c + (b)));

    cout << min(one,two) ;

    return 0;
}