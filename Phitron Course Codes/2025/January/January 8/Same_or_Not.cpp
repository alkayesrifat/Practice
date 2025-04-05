#include<bits/stdc++.h>
using namespace std;


int main(){

    int nn; cin >> nn ; int mm ; cin >> mm;
    stack<int>n; queue<int>m;

    for (int i = 0; i < nn; i++)
    {
        int v;
        cin >>v ;
        n.push(v);

    }

    for (int i = 0; i < mm; i++)
    {
        int v;
        cin >>v ;
        m.push(v);

    }
    int f = 1;
    if (n.size() == m.size())
    {
        while (n.empty() == false)
        {
            if (n.top() != m.front())
            {
                f = 0; break;
            }
            n.pop();m.pop();
            
        }
        
    }
    else
    {
        f = 0;
    }
    
    if (f == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    
    

    return 0;
}