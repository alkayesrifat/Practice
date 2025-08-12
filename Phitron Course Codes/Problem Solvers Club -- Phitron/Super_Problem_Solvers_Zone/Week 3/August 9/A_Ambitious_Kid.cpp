/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/08/2025 (Saturday)
 * Time       : 18:20 
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

    int n ;
    cin >> n ;

    int minn = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if(val < 0){
            minn = min(minn,abs(val));
        }
        else
        {
            minn = min(minn,val);
        }
        
    }
    cout << minn ;
    

    return 0;
}