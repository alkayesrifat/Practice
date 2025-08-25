// Link : https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/G



#include<bits/stdc++.h>
using namespace std;



int main(){

    int test ; cin >> test ;
    for (int ii = 0; ii < test; ii++)
    {
        int even_count = 0, odd_count = 0;
        int n ; cin >> n ;  int array[n];
        for (int i = 0; i < n; i++)
        {
            cin >> array[i];
            if (array[i] % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        
        if (n % 2 != 0)
        {
            cout << -1 << endl;
        }
        else 
        {
            cout << abs(even_count - odd_count)  << endl;
        }

    }

    
    return 0;
}