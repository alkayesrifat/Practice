#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n ; int q ; cin >> q;
    vector<long long int>array(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    for (int i = 2; i <= n; i++)
    {
        array[i] = array[i-1] + array[i];
    }
    while (q--)
    {
        int f , l;cin >> f >> l;
        if (f==1)
        {
            cout << array[l] << endl;
        }
        else
        {
            cout << array[l] - array[f-1] << endl;
        }
        
        
    }
    
    
    



    return 0;
}