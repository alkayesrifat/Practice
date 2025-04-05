#include<bits/stdc++.h>
using namespace std;

int main(){

    int array[] = {1,2,3,4,5,6,7,89};

    list<int>name(array,array+8);
    


    for ( int v : name)
    {
        cout << v << " ";
    }
    


    return 0;
}