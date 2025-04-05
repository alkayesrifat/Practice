#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ; cin >> n;

    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int find = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                continue;
            }
            if (array[i] == array[j])
            {
                find = 1 ; 
                break;
            }
            
            
        }
    
    }
    if (find==1)
    {
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }


    return 0;
}