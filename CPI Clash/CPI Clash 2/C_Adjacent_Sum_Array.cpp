/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 22/06/2025 (Sunday)
 * Time       : 11:31 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ;
    cin >> t;

    while (t--)
    {
        int n ;
        cin >> n ;

        vector<int>b(n - 1);

        for (int i = 0; i < n -1 ; i++)
        {
            cin >> b[i];
        }

        vector<int>ans;
        
        sort(b.begin(),b.end());
        
        ans.push_back(1);
        
        for(int i = 0 ; i < n -1 ; i++){
            ans.push_back(b[i]-ans[ans.size()-1]);
        }

        for (int x : ans) {
            cout << x << " ";
        }
        cout << "\n";
        

    }
    

    return 0;
}