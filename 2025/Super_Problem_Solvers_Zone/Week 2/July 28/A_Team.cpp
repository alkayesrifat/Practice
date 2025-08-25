/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 12:41 
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
    int cnt = 0 ;
    while(test_case--)
    {
        int a,  b, c;
        cin >>a  >> b >> c;

        int sum = a + b + c;

        if (sum >= 2)
        {
            cnt++;
        }
        

    }
    cout << cnt << endl;

    return 0;
}