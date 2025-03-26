/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-26   10:56:57
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc071/tasks/abc071_b?lang=en
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    cin >> s;

    sort(s.begin(), s.end());

    set<char> setchar;

    for (int i = 0; i < s.size(); i++)
    {
        setchar.insert(s[i]);
    }

    if (setchar.size() == 26)
    {
        cout << "None";
    }
    else
    {

        for (int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            auto it = setchar.find(c);
            if ( it == setchar.end() )
            {
                cout << c ;
                break;
            }
            
        }
        
        
    }

    return 0;
}