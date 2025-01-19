#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>name={7,8,9,4,5,6,1,2};


    list<int>list2(name);


    cout << "First list" << endl;
    for (int v : name)
    {
        cout << v << " ";
    }

    cout<< endl << "secont list && also the copy one" << endl;
    for (int v : list2)
    {
        cout << v << " ";
    }
    

    return 0;
}