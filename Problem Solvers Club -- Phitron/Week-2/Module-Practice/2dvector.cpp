/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-07   07:40:06
 * ---------------------
 * Problem Link: 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    int n ;
    int m;

    cin >> n >> m;

    vector<vector<int>> v(n,vector<int>(m));

    for(int i = 0 ; i < n ; i++ ){

        for (int j = 0; j < m ; j++)
        {
            cin >> v[i][j];
        }
        
    }

    for(int i = 0 ; i < n ; i++ ){

        for (int j = 0; j < m ; j++)
        {
            cout << v[i][j] << " ";
        }
        
        
    
        

        
        
    }


    return 0;
}