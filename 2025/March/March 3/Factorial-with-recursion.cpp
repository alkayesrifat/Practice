#include<bits/stdc++.h>
using namespace std;

// int fac(int n ){
//     if (n == 1)
//     {
//         return 1;
//     }

//     int f = fac(n-1);
//     return f*n;
    
// }

// int fac(int n ){
//     if (n == 1)
//     {
//         return 1;
//     }

//     int f = fac(n-1) * n;
//     return f;
    
// }

int fac(int n ){
    if (n == 1)
    {
        return 1;
    }

   
    return fac(n-1) * n;
    
}


int main(){

    cout << fac(5);
    return 0;
}