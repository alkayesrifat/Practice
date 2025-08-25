// Link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/V

#include <bits/stdc++.h>

using namespace std;
int main(){


    string s;
    cin >> s;

    int index = s.find("EGYPT");
    cout << index;
    s.replace(index,index + 4," ");

    cout << s;

    return 0;
}