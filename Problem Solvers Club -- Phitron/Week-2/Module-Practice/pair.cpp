/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-06   08:33:24
 * ---------------------
 * Problem Link: 
 */

#include<bits/stdc++.h>
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr); 

    // pair<string,int>pr;
    // pr.first = "hablu";
    // pr.second = 56;

    // cout << pr.first << " " << pr.second << endl;

    // auto [name, roll] = pr;
    // std::cout << name << " " << roll << std::endl;

    int n ;
    cin >> n;

    pair<string,int> student[n];

    for (int i = 0; i < n; i++)
    {
        cin >> student[i].first;
        cin >> student[i].second;
        // cout << student[i].first << " " << student[i].second << endl;
    }

    for ( auto [x,y] : student)
    {
        cout << x << " " << y << endl;
    }
    
    


    return 0;
}