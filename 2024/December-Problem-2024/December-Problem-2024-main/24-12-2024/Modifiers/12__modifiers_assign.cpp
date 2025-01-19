#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int>list1 = {1,2,3,4,5,6,7,8,9};

    // list<int>list2 = list1;

    list<int>list2;
    list2.assign(list1.begin(),list1.end());


    for ( int v : list2)
    {
        cout << v << " ";
    }
    


    return 0;
}