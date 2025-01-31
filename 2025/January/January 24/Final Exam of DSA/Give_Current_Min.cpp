#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>>pq;

    int n ; cin >> n;
    
    while (n--)
    {
        int v ; cin >>v;
        pq.push(v);
    }

    int t;
    cin >> t;


    while (t--)
    {
        int q;cin >> q;
        if (q == 0)
        {
            int v2; cin >> v2;
            pq.push(v2);
            cout << pq.top() << endl;
        }
        else if (q == 1)
        {
            if (pq.empty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
            
            
        }
        else
        {

            pq.pop();

            if (pq.empty() == true)
            {
                cout << "Empty" << endl;
            }
            else
            {
                cout << pq.top() << endl;
            }
            
        }
        
        
        
    }
    
    

    return 0;
}