/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 09/07/2025 (Wednesday)
 * Time       : 10:13
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
        string s;
        cin >> s;

        map<char, int> mp;

        char first = s[0];

        int mill = 1 ;

        for (int i = 0; i < s.size(); i++)
        {
            mp[s[i]]++;

            if (s[i] != first)
            {
                mill = 0;
            }
            
        }

        if (s.size() == 1)
        {
            cout << "-1" << endl;
            continue;
        }
        

  

        vector<char> even;
        vector<char> oddd;

        for (auto x : mp)
        {
            if (x.second % 2 != 0)
            {
                oddd.push_back(x.first);
            }
            else
            {
                even.push_back(x.first);
            }
        }

        if (mill != 0)
        {
            cout <<-1 << endl;
        }
        else
        {
            for (auto x : even)
            {
                for (int i = 0; i < (mp[x]); i++)
                {
                    cout << x;
                }
            }
            for (auto x : oddd)
            {
                for (int i = 0; i < (mp[x]); i++)
                {
                    cout << x;
                }
            }

            cout << endl;
        }
    }

    return 0;
}