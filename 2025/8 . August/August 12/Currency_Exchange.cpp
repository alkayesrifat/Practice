/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/08/2025 (Tuesday)
 * Time       : 06:23 
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
        int a , b , aa , bb;

        cin >> a >> b >> aa >> bb ;
        
        int sumab = 5*(a) + b;
        int sumaabb = 5*(aa) + bb;

        if(sumaabb == sumab){
            cout << "YES" << endl;
        }
        else if (sumaabb < sumab)
        {
            if((sumab - sumaabb)% 6 ==0){
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" <<endl;
            }
            
        }
        else
        {
            cout << "No" << endl;
        }
        
        

    }

    return 0;
}