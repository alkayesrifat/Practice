/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 23/07/2025 (Wednesday)
 * Time       : 10:15 
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
        int n , x ;
        cin >> n >> x;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        


        int maxx = (v[0] - 0);

        for (int i = 0; i < n - 1; i++)
        {
            maxx = max(maxx, abs(v[i]-v[i+1]));
        }

        int c = abs(v[n-1]-x);
        c = c*2;
        cout <<  max(maxx,c )<< endl;


        
        

    }

    return 0;
}