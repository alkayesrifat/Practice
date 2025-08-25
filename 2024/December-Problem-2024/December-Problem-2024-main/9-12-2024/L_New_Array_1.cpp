#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;
    cin >> n;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<int>c=b;
    c.resize(n*2);
    
    for (int i = n,j = 0; i < n*2; i++,j++)
    {
        c[i] = a[j];
    }

    for (int i = 0; i < n*2; i++)
    {
        cout << c[i] << " ";
    }
    
    

    


    return 0;
}