#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a(8,1);

    a.push_back(5);
    a.push_back(88);

    for (int v: a)
    {
        cout << v << " ";
    }
    


    return 0;
}