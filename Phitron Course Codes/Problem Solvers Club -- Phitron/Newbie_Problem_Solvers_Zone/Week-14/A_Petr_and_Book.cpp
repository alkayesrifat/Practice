/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/07/2025 (Wednesday)
 * Time       : 11:53
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> v(7);

    for (int i = 0; i < 7; i++)
    {
        cin >> v[i];
    }

    int cnt = 0;
    long long  sum = 0;

    // for (int i = 0; i < 7; i++) {
    //     cout << v[i] << " ";
    // }

    cout << endl;
    int j = 1;

    while (sum < n)
    {

        for (int i = 0; i < 7; i++)
        {
            j++;

            sum = sum + v[i];
            cnt++;

            if (sum >= n)
                break;
        }
    }

    if (cnt == 7)
    {
        cout << 7 ;
        
    }
    
    else if (cnt % 7 == 0)
    {
        cout <<  7;
    }
    else if (cnt < 7)
    {
        cout << cnt;
    }
    else
    {
        cout << cnt % 7 ;
    }
    
    
    

    return 0;
}