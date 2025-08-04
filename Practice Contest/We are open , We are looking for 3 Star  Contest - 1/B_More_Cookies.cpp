// upsolve

/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/07/2025 (Thursday)
 * Time       : 15:50 
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
        int n , c;
        cin >> n >> c;

        vector<int>v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            
        }

        for (int f = 0; f < 2000; f++)
        {
            int cc = c + f;
            int ace = 0 , choto = 0 ;

            for (int i = 0; i < n; i++)
            {
                if(v[i] < cc){
                    choto =1;
                }
                if(v[i] == cc){
                    ace = 1;
                }
            }

            if(ace == 0 && choto == 1){
                cout << cc - c << endl;
                break;
                
            }
            
        }
        // cout << "sdf";


        

    }

    return 0;
}