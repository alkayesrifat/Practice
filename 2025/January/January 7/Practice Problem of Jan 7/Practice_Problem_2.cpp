// LINK : https://docs.google.com/document/d/1KOilh4Vb-PN21_kD7ejLA6qx6AhVbHlq/edit


#include<bits/stdc++.h>
using namespace std;

bool issame(stack<int>ss , queue<int>qq){
    

    while (ss.empty() == false)
    {
        if (ss.top() != qq.front())
        {
            return false;
        }
        ss.pop(); qq.pop();
        
    }
    return true;

}


int main(){

    stack<int>s;
    queue<int>q;
    int sn; cin >> sn;
    for (int i = 0; i < sn; i++)
    {
        int v ; cin >> v ;
        s.push(v);
    }

    int qn; cin >> qn;
    for (int i = 0; i < qn; i++)
    {
        int v ; cin >> v ;
        q.push(v);
    }
    if (sn == qn)
    {
        if (issame(s, q))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}