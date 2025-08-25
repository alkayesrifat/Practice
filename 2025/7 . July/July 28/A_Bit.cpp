/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 12:45 
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
    int sum = 0 ;
    while(test_case--)
    {

        char a , b , c ;
        cin >> a >> b >>c ;

        if(b == '+'){
            sum++;
        }
        else
        {
            sum--;
        }
        
        
        
        

    }

    cout << sum << endl;
    return 0;
}