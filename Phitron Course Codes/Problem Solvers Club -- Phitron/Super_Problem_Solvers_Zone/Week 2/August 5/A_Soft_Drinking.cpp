/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 05/08/2025 (Tuesday)
 * Time       : 13:00 
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

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >>np;

    int pani = k*l;
    int lebu = c*d;
    int lobon = p;

    pani = pani / nl;
    lobon = lobon / np;

    int ans =  min({pani,lobon, lebu})/n;

    cout << ans ;

    return 0;
}