/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/08/2025 (Thursday)
 * Time       : 20:13 
 * ---------------------
 */

#include<bits/stdc++.h>
//pbds section Start

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
        int sobek = 0 ;
        int cnt = 0 ;
        map<int,int>mp;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mp[v[i]]++;
        }
        
        sort(v.rbegin(),v.rend());


        for(int i  = 1 ; i<n;i++ ){
            if (v[i]!=v[0])
            {
                sobek = 1;
                cnt++;
                
            }
            
        }

        if(sobek == 0){
            int cal = n - cnt;

            if( abs(cnt -cal) > 1){
                cout << "NO" << endl;continue;
            }
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            cout << endl;
            
        }
        


    }

    return 0;
}