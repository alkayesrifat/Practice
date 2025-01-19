#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a ={1,2,3,4,5,6,7,8,9};


    auto i = find(a.begin(),a.end(),9);



    if (i == a.end())
    {
        cout << "nai nai";
    }
    
    else
    {
        cout << "ace ace";
    }
    

    return 0;
}