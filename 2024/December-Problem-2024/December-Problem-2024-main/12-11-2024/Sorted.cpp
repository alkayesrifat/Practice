#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;cin >> test;
    while (test--)
    {
        int n ; cin >> n;
        int array[n];int c[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            c[i] = array[i];
        }
        sort(c,c+n);
        int f = 0;
        for (int i = 0; i < n; i++)
        {
            if (array[i] != c[i])
            {
                f = 1;break;
            }
            
        }
        if (f==1)
        {
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
        
        
        
    }
    
    return 0;
}