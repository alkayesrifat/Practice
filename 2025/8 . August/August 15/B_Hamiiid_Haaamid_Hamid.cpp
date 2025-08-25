/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 07/08/2025 (Thursday)
 * Time       : 21:10
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n, x;
        cin >> n >> x;
        int inf = 1e9;

        int first = -inf;
        int sec =inf;

        


        vector<char> v(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> v[i];
        }

        if (x == 1 || x == n)
        {
            cout << 1 << endl;
            continue;
        }

        for (int i = x; i > 0; i--)
        {
            if (v[i] == '#')
            {
                first = i;
                break;
            }
        }

        for (int i = x; i <= n; i++)
        {
            if (v[i] == '#')
            {
                sec = i;
                break;
            }
        }


        if (first == -inf && sec == inf)
        {
            cout << 1 << endl;
            continue;
        }
        first--;
        sec--;
        x--;

        

        cout << max(  min( x +1 , (n-sec) + 1  )  , min(  first + 2 , (n-x)  ) )<< endl;
        
    }

    return 0;
}