/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 21:25 
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

    int n ;
    cin >> n;

    vector<int>v;

    
    if(n == 1){
        cout << 1 ;
    }
    else if (n < 4)
    {
        cout << "NO SOLUTION" ;
    }
    else if (n == 4)
    {
        cout << "2 4 1 3";
    }
    
    else
    {
        if (n % 2 == 0)
        {
            int se = n / 2 ;
            se++;
            int ss = se;
            for (int i = 1; i <ss ; i++)
            {
                cout << i << " " << se << " ";se++;
                
            }
            
        }
        else
        {
            int se = n / 2 ;
            se+=2;
            int ss = se;
            vector<int>ans;
            for (int i = 1; i <ss ; i++)
            {
                
                ans.push_back(i);ans.push_back(se);
                se++;
                
            }

            for(int i = 0 ;i < ans.size()-1;i++){
                int x = ans[i];
                cout << x <<" ";
            }
        }
        
        
    }
    
    
    

    return 0;
}