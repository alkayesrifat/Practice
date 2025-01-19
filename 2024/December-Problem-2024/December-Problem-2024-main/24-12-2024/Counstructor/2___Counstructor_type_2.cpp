#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>name(8);

    cout << "size " << name.size()<<endl;

    name = {1,2,3,4,5,6,7,8,9};


    for ( int v : name)
    {
        cout << v << " ";
    }

    cout<<endl << "size " << name.size()<<endl;
    


    return 0;
}