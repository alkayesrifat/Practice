#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;cin >> n;
    vector<int>array(n);

    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
        if (array[i]==0)
        {
            
        }
        else if (array[i] > 0)
        {
            array[i] = 1 ;
        }
        else{
            array[i] = 2 ;
        }
        cout << array[i] << " ";
        
    }
    


    return 0;
}