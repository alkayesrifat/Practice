#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , e ;
    cin >> n >> e;

    vector<int> adj_list[n+1];

    while(e--)
    {
        int a ,b;
        cin >>a >>b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    for (int  i = 0; i < n+1; i++)
    {
        cout << i << " -> ";
        for ( int x : adj_list[i])
        {
            cout << x << " ";
            
        }
        cout << endl;
        
    }
    



    return 0;
}