/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 
    
    int t ;cin >> t;
    while(t--){
        int a , b ;
        cin >> a >> b;
        int maxx = max(a,b);
        int minn = min(a,b);
        
        int cnt = 0 ;
        while(minn*2 > maxx){
            minn--;
            cnt++;
        }
        cout << cnt << endl;
    }

    


    return 0;
}