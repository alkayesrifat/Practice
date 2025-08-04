/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 20:04 
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

    int n, x, y;
    cin >> n >> x >> y;

    if(x > n || y > n){
        cout << "NO" <<endl;
        return 0;
    }

    x--;
    y--;




    string s;
    cin >> s;

    int a = s[x] - '0';
    int b = s[y] - '0';


    if (a == 0 && b == 0) {
        cout << "YES" << endl;
        return 0;
    }

    if (a % b == 0 || b % a == 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
