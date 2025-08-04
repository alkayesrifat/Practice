/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 17:34 
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
        string s ;
        cin >> s;

        if (s.size() != 14)
        {
            cout << "NO" << endl;
        }
        else
        {
            if(s[0] =='+' && s[1] == '8' && s[2] == '8' && s[3] == '0' && s[4] =='1'){
                if(s[5] =='3' || s[5] =='7' || s[5] =='4' || s[5] =='9' || s[5] =='5' || s[5] =='2' || s[5] =='6' || s[5] =='8'){
                    int a = 0 ;
                    for (int i = 1; i < s.size(); i++)
                    {
                        if((s[i]>= '0' && s[i] <= '9' ) ){

                        }
                        else
                        {
                            a = 1;
                            break;
                        }
                        
                    }
                    if(a == 1){
                        cout << "NO" << endl;
                    }
                    else
                    {
                        cout << "YES" << endl;
                    }
                    
                    
                }
                else
                {
                    cout << "NO" << endl;
                }
                
            }
            else
            {
                cout << "NO" << endl;
            }
            
            
        }
        
        



    }

    return 0;
}