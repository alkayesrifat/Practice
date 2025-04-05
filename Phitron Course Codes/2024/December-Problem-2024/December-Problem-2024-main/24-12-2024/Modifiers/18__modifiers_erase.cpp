#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a ={1,2,3,4,5,6,7,8,9};

    a.erase(next(a.begin(),2)); // eda 3 niumber e je ace tare delete koira dey

    //delete at any position er moto


    for (int i : a)
    {
        cout << i << " ";
    }
    

    return 0;
}