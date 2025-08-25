/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 25/07/2025 (Friday)
 * Time       : 20:41 
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

        if (((n - 1 ) % 3 == 0 ) || ((n+1)%3==0) )
        {
            cout << "First" << endl;
        }
        else
        {
            cout << "Second" << endl;
        }
        
        

    }

    return 0;
}