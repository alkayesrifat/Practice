/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/08/2025 (Thursday)
 * Time       : 22:12 
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
        int n , s ;
        cin >> n >> s;
        map<int,int>mp;

        ll sum = 0 ;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            sum+=v[i];
            mp[v[i]]++;
        }

       

        if(s < sum || s == sum+1){

            for(int i  = 0 ; i < mp[0];i++){
                cout << 0 << " ";
            }
            for(int i  = 0 ; i < mp[2];i++){
                cout << 2 << " ";
            }
            for(int i  = 0 ; i < mp[1];i++){
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
        
        

    }

    return 0;
}