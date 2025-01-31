#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t ; cin >> t;

    while (t--)
    {
        int n;cin >> n;
        set<int>se;

        while (n --)
        {
            int v ;cin >> v;
            se.insert(v);
        }
        for (auto i = se.begin(); i != se.end(); i++)
        {
            cout << *i << " ";
        }
        cout << endl;
        
        
    }
    
  

    return 0;
}