/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 08:56
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;

        for (int i = 0; i < (n / 2); i++)
        {
            cout << 2 << " ";
        }
        
    }
    else
    {
        n = n - 3 ;

        cout << (n / 2 )+ 1 << endl;

        for (int i = 0; i < (n / 2); i++)
        {
            cout << 2 << " ";
        }
        cout << 3 ;


    }
    
    

    return 0;
}