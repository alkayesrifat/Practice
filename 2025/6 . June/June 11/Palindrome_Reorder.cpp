/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/06/2025 (Wednesday)
 * Time       : 07:10
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

    set<char> st;

    map<char, int> mp;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
        st.insert(s[i]);
    }

    string ans = "";

    char odd;
    int cnt = 0 ;

    for (auto [x, y] : mp)
    {

        if (y % 2 != 0)
        {
            odd = x;
            cnt++;
        }
        else
        {
            for (int i = 0; i < (y / 2); i++)
            {
                ans.push_back(x);
            }
        }
    }

    for (int i = 0; i < mp[odd]; i++)
    {
        ans.push_back(odd);
    }

    for (auto it = mp.rbegin(); it != mp.rend(); ++it)
    {
        auto [x, y] = *it;

        if (y % 2 != 0)
        {
            odd = x;
        }
        else
        {
            for (int i = 0; i < (y / 2); i++)
            {
                ans.push_back(x);
            }
        }
    }

    if(cnt > 1){
        cout << "NO SOLUTION" << endl;
    }
    else{
        cout << ans << endl;
    }

    return 0;
}