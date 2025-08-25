/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 14/07/2025 (Monday)
 * Time       : 17:41 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ;
    cin >> n >> m ;

    int c = 0 ;

    while (1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (i > m)
            {
                c=1;
                break;
            }
            else
            {
                m-=i;
            }
            
            
        }
        if(c==1)break;
        
    }
    cout << m;
    

    return 0;
}