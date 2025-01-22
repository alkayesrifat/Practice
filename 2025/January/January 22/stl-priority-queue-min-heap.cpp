#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int,vector<int>,greater<int>>pq;

    int n ; cin >> n;
    
    while (n --)
    {
        int v ; cin >> v;
        pq.push(v);
    }
    

    cout << pq.top();

    cout << endl;
    pq.pop();

    cout << pq.top();


    return 0;
}