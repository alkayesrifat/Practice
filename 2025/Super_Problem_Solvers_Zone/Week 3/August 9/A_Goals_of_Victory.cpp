/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/08/2025 (Saturday)
 * Time       : 10:55 
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
        cin >> n ;

        ll msum = 0 ;
        ll sum = 0 ;

        for (int i = 0; i < n-1; i++)
        {
            int val ;
            cin >> val;

            if(val < 0){
                msum += abs(val);
            }
            else
            {
                sum+=val;
            }
            
        }


        if( msum > sum){
            cout <<abs(sum-msum) << endl;
        }
        else
        {
            cout << (sum - msum)*-1<<endl;
        }
        
        

    }

    return 0;
}