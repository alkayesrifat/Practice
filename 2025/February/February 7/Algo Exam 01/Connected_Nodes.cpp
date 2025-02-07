#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ,e ;
    cin >> n >> e;

    vector<int>adj_list[n];

    for (int i = 0; i < e; i++)
    {
        int a,b;
        cin >>a >> b;
        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }
    int q ; cin >> q;
    vector<int>result;


    while (q--)
    {
        int o;
        cin >> o;
        for (int i : adj_list[o])
        {
            result.push_back(i);
        }
        sort(result.begin(), result.end(), greater<int>());
        if (result.empty() == true)
        {
            cout << -1;
        }
        
        else {
            for (int i : result) {
            cout << i << " ";
            }
        }
        result.clear();
        cout << endl;
        
    }
    
    
    return 0;
}