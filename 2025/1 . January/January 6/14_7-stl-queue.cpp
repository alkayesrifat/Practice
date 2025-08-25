#include<bits/stdc++.h>
using namespace std;




int main(){




    queue<int> st;
    stack<int>a;


    int n ;           cin >> n; 

    for (int i = 0; i < n; i++)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    cout << st.size()<< endl;
    while (st.empty() == false)
    {
        cout << st.front() << endl;
        st.pop();
    }
    
    
    
    
    




    return 0;
}