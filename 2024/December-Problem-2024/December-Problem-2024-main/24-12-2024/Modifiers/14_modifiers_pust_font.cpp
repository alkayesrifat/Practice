#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a = {1,2,3,4,5};

    a.push_front(100);

    for ( int i : a)
    {
        cout << i <<" ";
    }
    

    return 0;
}