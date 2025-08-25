// LINK : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;
    vector<int>a(n);int count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    
        
    }
    for (int i = 0; i < n; i++)
    {
        auto k  = find(a.begin(),a.end(),a[i]+1);
        if (k != a.end())
        {
            count ++;
            
        }
    }
    
    
    cout << count;
    
    return 0;
}