#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    

    int nn;cin >> nn;
    vector<int>b(nn);
    for (int i = 0; i < nn; i++)
    {
        cin >> b[i];
    }
    int x; cin >>x;
    
    a.insert(a.begin()+x,b.begin(),b.end());
    int len = a.size();
    for (int i = 0; i < len; i++)
    {
        cout << a[i] << " ";
    }
    





    return 0;
}