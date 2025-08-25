#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i]; 
        }

        int max1 = -1;
        int max2 = -1;
        int f = -1;
        int l = -1;

    

        for (int i = 0; i < n; i++)
        {
            if (v[i] > max1)
            {
                f = i;
                max1 = v[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (v[i] == max1)
            {
                continue;
            }
            if (v[i] > max2)
            {
                l = i;
                max2 = v[i];
            }
        }
        cout << min(f,l) << " " << max(f,l)<< endl;
        v.clear();
        
    
    }

    return 0;
}