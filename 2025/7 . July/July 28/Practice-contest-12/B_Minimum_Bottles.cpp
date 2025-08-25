/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 28/07/2025 (Monday)
 * Time       : 20:03 
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
        int n , x ;cin >> n >> x;

        ll sum = 0 ;

        for (int i = 0; i < n; i++)
        {
            int val ;cin >> val;
            sum+=val;
        }

        int cnt = 0;

        for (int i = 0; i < n; i++)
        {
            if(sum <= 0){
                break;
            }

            sum-=x;
            cnt++;
        }

        cout << cnt << endl;
        
        
        
        

    }

    return 0;
}