/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-27   21:29:28
 * Portfolio  : https://alkayesrifat.netlify.app/ 
 * ---------------------
 */


#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int t;
    cin >> t;

    while (t--)
    {
        long long int a, b;
        cin >> a >> b;

        if (b == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            

            cout << "YES" << endl;

            long long fast = a * b;

            long long second = a;

            long long int third = fast + second;

            cout << fast << " " << second << " " << third << endl;
        }
    }

    return 0;
}