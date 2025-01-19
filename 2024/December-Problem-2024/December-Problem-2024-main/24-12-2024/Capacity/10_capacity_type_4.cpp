#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>notempty = { 1,2,3,1,2};

    if (notempty.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }
    
    notempty.clear();


    if (notempty.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }   


    list<int>emptyy;

    if (emptyy.empty())
    {
        cout << "empty" << endl;
    }
    else
    {
        cout << "not empty" << endl;
    }   
    



    return 0;
}