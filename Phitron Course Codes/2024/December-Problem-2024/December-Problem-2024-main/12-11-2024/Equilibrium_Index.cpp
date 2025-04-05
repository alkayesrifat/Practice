#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;cin >> n;
    int array[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int p[n];
    p[0] = array[0];
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i-1] + array[i];
    }
    //lkajf;ljsado[fj
    int index = -1;
    for (int i = 1; i < n-1; i++)
    {
        
        int last = p[n-1] - p[i];
        int first = p[i-1];
        if (last==first)
        {
            index = i;
            break;
        }
        
    }
    cout << index;
    


    return 0;
}