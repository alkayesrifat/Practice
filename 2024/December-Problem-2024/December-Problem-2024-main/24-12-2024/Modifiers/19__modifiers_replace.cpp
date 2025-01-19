#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a ={1,2,1,4,5,6,1,8,1};

    replace(a.begin(),a.end(),1,99);


    for (int i : a)
    {
        cout << i << " ";
    }
    

    return 0;
}