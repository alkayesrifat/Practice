// LInk : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M
#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<char>c(1);
    cin >> c[0];
    
    if (c[0]>=48 && c[0]<=57)
    {
        cout << "IS DIGIT" << endl;
    }
    else if (c[0]>=65 && c[0]<=90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (c[0]>=97 && c[0]<=122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    
    
    


    return 0;
}