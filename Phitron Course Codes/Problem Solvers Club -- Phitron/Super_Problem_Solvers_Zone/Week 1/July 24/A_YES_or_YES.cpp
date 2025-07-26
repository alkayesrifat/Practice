/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 24/07/2025 (Thursday)
 * Time       : 06:50 
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
        string s ;
        cin >>s;

        if ((s[0] == 'y' || s[0] == 'Y') && (s[1] == 'e' || s[1] =='E') &&( s[2] =='s' || s[2] == 'S'))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
        



    }

    return 0;
}