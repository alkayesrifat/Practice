// Link : https://codeforces.com/contest/1703/problem/B
#include<bits/stdc++.h>
using namespace std;

int main(){

    int test ; cin>> test;
    for (int iii = 0; iii < test; iii++)
    {
        int n ; cin >> n ;
        string s; cin >>s;
        int f[26] ={0};
        int sum = 0;
        for (int i = 0; i < n ; i++)
        {
            f[(s[i]-'A')]++;
        }
        for (int i = 0; i < 26; i++)
        {
            if (f[i] > 0)
            {
                
                sum = sum + f[i]+1;
            }
            
        }
        
        cout << sum << endl;
    }
    




    return 0;
}