#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int>pq;

    int n ; cin >> n;

    while (n --)
    {
        int v ; cin >> v;
        pq.push(v);
    }

    cout << pq.top();

    pq.pop();
    cout << " " << pq.top();
    


    return 0;
}