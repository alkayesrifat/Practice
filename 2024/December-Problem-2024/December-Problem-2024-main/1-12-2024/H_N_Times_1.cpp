// Link : https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/H

#include<bits/stdc++.h>
using namespace std;

void ntimes(int n , char c){

    for (int i = 0; i < n; i++)
    {
        cout << c << " ";
    }
    cout << endl;
    
}

int main(){

    int test ; cin >> test ;
    for (int i = 0; i < test; i++)
    {
        int n;    cin >> n;
        char c ;   cin >> c;
        ntimes(n,c);
    }
    


    return 0;
}