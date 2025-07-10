/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 19/06/2025 (Thursday)
 * Time       : 15:52 
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
        int x , y ;
        cin >> x >> y ;

        if (x >= 50 && y < 50)
        {
            cout << "F" << endl;
        }
        else if (x < 50)
        {
            cout << "Z" << endl;
        }
        else
        {
            cout << "A" << endl;
        }
        
        
        
    }
    

    return 0;
}