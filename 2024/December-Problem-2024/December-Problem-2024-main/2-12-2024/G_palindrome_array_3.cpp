#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n ;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int is = 1;
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        if (array[i] != array[j])
        {
            is = 0;
        }
        
    }
    if (is==1)
    {
        cout << "YES" ;
    }
    else
    {
        cout << "NO";
    }
    
    
    
    return 0;
}