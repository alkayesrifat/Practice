#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>name = {1,2,3,4,5,6,7,8,9};

    // name = {0,5};

    cout << "Size " << name.size()<<endl;

    for ( int v : name)
    {
        cout << v << " ";
    }
    

    return 0;
}