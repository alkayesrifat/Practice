// LINK : https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit


#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<int>s;
    int n ; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v ;   cin >> v;
        s.push(v);
    }

    stack<int>copy;

    while (s.empty() == false)
    {
        copy.push(s.top());
        s.pop();
    }

    while (copy.empty() == false)
    {
        cout << copy.top() << " ";
        copy.pop();
    }
    
    
    
    return 0;
}