#include<bits/stdc++.h>
using namespace std;

int main(){

    int test;cin >> test;
    for(int ii = 0 ; ii < test ; ii++)
    {
        int n ; cin >> n ;
        int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
        }
        int minn = INT_MAX;
        for (int i = 0; i < n-1; i++)
        {
            for (int j = i +1 ;j<n; j++)
            {
                
                int result = array[i] + array[j] + (j - i);
                minn = min(minn, result);
                
            }
            
        }
        
        
        
        
        cout << minn<<endl;
        
        
    }
    
    return 0;
}