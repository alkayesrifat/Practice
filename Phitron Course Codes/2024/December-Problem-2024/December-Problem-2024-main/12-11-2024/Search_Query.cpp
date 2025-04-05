#include<bits/stdc++.h>
using namespace std;

int main(){

    int n , q; cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    sort(array,array+n);
    cin >> q;
    while (q--)
    {
        int t ; cin >> t;
        int found = 0;
        int l = 0 ; int r = n -1;
        while (l <= r)
        {
            int mid = (l + r)/2;
            if (array[mid] == t)
            {
                found = 1 ;
                break;
            }
            else if (t > array[mid])
            {
                l = mid + 1;
            }
            else if(t < array[mid]){
                r = mid - 1;
            }
            
            
        }
        
        found == 1 ? cout << "YES" << endl: cout << "NO" << endl;
        
    }
    

    return 0;
}