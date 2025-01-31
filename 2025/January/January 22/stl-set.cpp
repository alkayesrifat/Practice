#include<bits/stdc++.h>
using namespace std;

int main(){

    set<int>s;

    int n;
    cin >> n ;

    while (n--)
    {
        int v;cin >> v;
        s.insert(v);
    }

    for (auto i = s.begin(); i != s.end(); i++)
    {
        cout << *i << " ";
    }
    
    

    
    return 0;
}