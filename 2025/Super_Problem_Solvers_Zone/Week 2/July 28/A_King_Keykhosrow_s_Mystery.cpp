/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 05:21 
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
        int a , b ;
        cin >>a >> b ;

        int num = 0 ;

        for (int i = 0; i < 10000000; i++)
        {
            if(i >= a || i >= b){
                if( i % a == i % b ){
                    num = i;
                    break;
                }
            }
        }

        cout << num << endl;
        

    }

    return 0;
}