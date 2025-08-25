/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 03/08/2025 (Sunday)
 * Time       : 19:34
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


    vector<bool> v(n + 2, true);

    for (int i = 2; i <= n+2; i++)
    {
        if (v[i])
        {
            for (int j = i + i; j <= n+2; j += i)
            {
                v[j] = false;
            }
        }
    }

    if(n <= 2){
        cout << 1 << endl;
    }
    else
    {
        cout << 2 << endl;
    }
    

    for(int i = 2 ; i <= n+1 ; i++){
        if(v[i]){
            // cout << i <<" -> "<< 1 << endl;
            cout <<  1 << " ";
        }
        else
        {
        //    cout << i <<" -> "<< 2 << endl;
           cout<< 2 << " ";
        }
        
    }

    return 0;
}