/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/08/2025 (Saturday)
 * Time       : 15:30 
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
        int n ;
        cin >> n ;
        int first = 0 ;
        int last = 0 ;

        for(int i = 0 ; i < n ; i++){
            int a , b;
            cin >> a >> b ;
            first = max(a,first);
            last = max(b,last);
        }

        ll ans = (first+first) + (last +last);
        cout << ans << endl;

    }

    return 0;
}