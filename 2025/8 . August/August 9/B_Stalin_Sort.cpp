/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/08/2025 (Saturday)
 * Time       : 15:51 
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

        int maxx = -9 ;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            maxx = max(v[i],maxx);
        }

        int sig = 0 ;

        int cnt = 0 ;
        if(v[0] == maxx){
            cout << 0 << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if(v[i] >= v[i-1]){
                cnt++;
            }

            if(v[i] == maxx){
                break;
            }
            
        }

        cout << cnt << endl;
        
        

    }

    return 0;
}