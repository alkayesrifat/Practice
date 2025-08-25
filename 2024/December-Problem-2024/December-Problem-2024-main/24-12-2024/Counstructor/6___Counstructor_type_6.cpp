#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int>n={12,1,3,12,98,54,55};

    list<int>name(n.begin(),n.end());

    for ( int v : name)
    {
        cout << v << " ";
    }
    
    
    return 0;
}