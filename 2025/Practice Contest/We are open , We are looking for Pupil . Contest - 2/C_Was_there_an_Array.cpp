/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 14:55 
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

        vector<int>v(n-2);
        n = n-2;
        for (int i = 0; i < n; i++)
        {   
            cin >> v[i];
        }
        
        int ind = 0;

        for (int i = 0; i < n-2; i++)
        {
            if((v[i] == 1 && v[i+1] == 0 )&& v[i+2] == 1){
                ind = 1;
                // cout << v[i] << " " << v[i+1] << " " << v[i+2] << endl;
            }
        }
        if(n == 1 || n == 2){
            cout << "YES" << endl;
            continue;
        }
        

        if (ind)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        
        
        

    }

    return 0;
}