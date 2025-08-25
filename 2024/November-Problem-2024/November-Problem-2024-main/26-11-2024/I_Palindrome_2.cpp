// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I
#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin >> s;

    string cp;
    cp = s;
    reverse(s.begin(),s.end());
    if (cp ==s)
    {
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    


    return 0;
}