#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a={1,2,3,1,4,1,5,6,8};

    a.remove(1);

    for ( int i : a)
    {
        cout << i << " ";
    }
    

    return 0;
}