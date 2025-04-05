#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>a={1,2,3,2,1,5,4,3,1,3};
    cout << "Size of a before clear " << a.size() << endl;
    for (int v:a)
    {
        cout << v << " ";
    }
    cout << endl;

    a.clear();

    cout << "Size of a after clear " << a.size() << endl;

    for (int v:a)
    {
        cout << v << " ";
    }
    cout << endl;



    return 0;
}