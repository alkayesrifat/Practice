/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/08/2025 (Sunday)
 * Time       : 15:44 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {
        
        int a , b , c , d;
        cin >> a >> b >> c >> d;

        if(a == b && b == c & c == d){
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        

    }

    return 0;
}