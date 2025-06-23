/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        bool flag = true;

        vector<bool> taken(n, false);

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
                continue;
          
            if (i > 0 && s[i - 1] == '1' && taken[i - 1] == false)
            {
                taken[i - 1] = true;
            }
            else if (i < n - 1 && s[i + 1] == '1' && taken[i + 1] == false)
            {
                taken[i + 1] = true;
            }
            else
            {
                flag = false;
                break;
            }
        }

        if (flag == true)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
        
        
    }

    return 0;
}
