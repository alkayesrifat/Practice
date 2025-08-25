// LINK : https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit


#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<int>q;
    int n ; cin >> n;

    for (int i = 0; i < n; i++)
    {
        int v ;   cin >> v;
        q.push(v);
    }

    stack<int>s;

    
    while (q.empty() == false)
    {
        s.push(q.front());
        q.pop();
    }

    queue<int>copy;


    while (s.empty() == false)
    {
        copy.push(s.top());
        s.pop();
    }


    while (copy.empty() == false)
    {
        cout << copy.front() << " ";
        copy.pop();
    }
    
    
    
    
    
    
    return 0;
}