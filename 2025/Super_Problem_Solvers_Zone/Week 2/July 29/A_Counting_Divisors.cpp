/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 29/07/2025 (Tuesday)
 * Time       : 19:57 
 * ---------------------
 */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int maxx = 1e6 + 9 ;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int>div(maxx);

    for (int i = 1; i < maxx; i++)
    {
        for (int j = i; j < maxx; j = j + i)
        {
            div[j]++;
        }
        
    }
    



    int test_case ;
    cin >>  test_case ;
    while(test_case--)
    {

        int n ;
        cin >> n ;

        cout << div[n] << endl;
        

    }

    return 0;
}