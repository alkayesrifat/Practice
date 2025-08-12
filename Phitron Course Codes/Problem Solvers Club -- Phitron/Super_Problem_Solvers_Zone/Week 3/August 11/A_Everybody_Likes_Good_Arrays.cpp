/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/08/2025 (Monday)
 * Time       : 09:45 
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

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        int cnt = 0 ;
        for (int i = 0; i < n-1; i++)
        {
            if(v[i]%2==0 && v[i+1]%2==0){
                cnt++;
            }
            else if (v[i]%2!=0 && v[i+1]%2!=0)
            {
                cnt++;
            }
            
        }

        cout << cnt << endl;
        
        

    }

    return 0;
}