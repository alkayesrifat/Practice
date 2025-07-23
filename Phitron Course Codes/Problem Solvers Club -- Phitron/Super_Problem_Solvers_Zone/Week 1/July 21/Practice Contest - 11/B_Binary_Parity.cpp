/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 21/07/2025 (Monday)
 * Time       : 20:04 
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
        int n ;
        cin >> n;

        string s = "";
        int one = 0 ;

        while (n > 0)
        {
            if (n % 2 == 0)
            {
                s.push_back('0');
                n = n / 2 ;
            }
            else
            {
                s.push_back('1');
                n = n /2;
                one++;
            }
            

            
        }

        if (one % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
        
        
        
        
        

    }

    return 0;
}