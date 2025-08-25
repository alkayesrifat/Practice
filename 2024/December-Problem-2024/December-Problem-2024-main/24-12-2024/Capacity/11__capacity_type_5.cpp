#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>name(8,1);
    name.resize(12,8);  


    for (int v:name)
    {
        cout << v << " ";
    }
    cout << endl;
    
    return 0;
}