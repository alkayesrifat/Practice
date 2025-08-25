/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 06/08/2025 (Wednesday)
 * Time       : 10:34 
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
        int n , k ;
        cin >> n >> k ;

        int cnt = 0 ;

        for (int i = 0; i < n; i++)
        {
            int val;cin >> val;
            if(val == k){
                cnt++;
            }
        }

        if (cnt >= 1)
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