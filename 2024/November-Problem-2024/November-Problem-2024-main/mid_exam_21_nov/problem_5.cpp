#include <bits/stdc++.h>

using namespace std;



int main()
{
    int t; cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n ,s ; cin >> n >>s ;
        int a[n];
        int found = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int r = 0; r <n; r++)
        {
            for (int b = r + 1; b < n; b++)
            {
                for (int c = b + 1; c < n; c++)
                {
                    if (a[r] + a[b] + a[c] == s)
                    {
                        found = 1;
                        break;
                    }
                    
                }
                
            }
            
        }
        if (found == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO ";
        }
        cout << endl;



    }
    

    return 0;
}
