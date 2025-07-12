/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 12/07/2025 (Saturday)
 * Time       : 11:31
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;

    int len = s.size();

    int cnt = 0;

    long long sum = 0;

    for (int i = 0; i < s.size(); i++)
    {
        sum += ((int)s[i] - 48);
    }
    // cout << sum;

    s= to_string(sum);

    // cout << s;

    while (sum > 9)
    {
        sum = 0;
        cnt++;
        for (int i = 0; i < s.size(); i++)
        {
            sum += ((int)s[i] - 48);
        }
        s= to_string(sum);
    }

    // cout << cnt;

    if (len == 1)
    {
        cout << 0 ;
    }
    else
    {
        cout << cnt + 1 ;
    }
    
    
    
    

    return 0;
}