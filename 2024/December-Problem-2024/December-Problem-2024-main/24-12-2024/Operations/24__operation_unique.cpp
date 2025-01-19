#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a={1,2,3,1,4,1,5,6,8};

    a.sort();
    a.unique();

    for ( int i : a)
    {
        cout << i << " ";
    }
    

    return 0;
}

// obossoi sorted thakte hobe