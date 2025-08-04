/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 01/08/2025 (Friday)
 * Time       : 21:39
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

    string sr;
    cin >> sr;

    map<char, int> mp;

    for (int i = 0; i < sr.size(); i++)
    {
        mp[sr[i]]++;
    }

    int odd = 0;
    string s = "";
    char oddcar;

    for (auto x : mp)
    {
        if (x.second % 2 != 0)
        {
            oddcar = x.first;
            odd++;
        }

        else
        {
            for (int i = 0; i < (x.second / 2); i++)
            {
                s.push_back(x.first);
            }
        }

        if (odd >= 2)
        {
            cout << "NO SOLUTION" << endl;
            break;
        }
    }

    if (odd <= 1)
    {
        string rev = s;
        reverse(rev.begin(), rev.end());
        if (odd == 1)
        {
            
            for (int i = 0; i < (mp[oddcar]); i++)
            {
                s.push_back(oddcar);
            }
        }

        s+=rev;
        
        cout << s ;
    }

    return 0;
}