// link : https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    int array[n];
    for (int i = 0; i < n ; i++)
    {
        cin>> array[i]; 
    }
    int isp = 1;
    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        if (array[i] != array[j])
        {
            isp = 0;
            break;
        }
        
    }
    if (isp == 1)
    {
        cout << "YES" << endl;

    }
    else
    {
        cout << "NO" << endl;
    }
    
    return 0;
}