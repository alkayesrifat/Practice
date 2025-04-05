#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a ={1,2,3,4,5,6,7,8,9};

    a.insert(next(a.begin(),2),200);


    for (int i : a)
    {
        cout << i << " ";
    }
    

    return 0;
}