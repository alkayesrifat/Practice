/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-07   18:57:20
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testcase;
    cin >> testcase;

    while (testcase--)
    {
        string s;
        cin >> s;

        vector<char> ans_vector;

        for (int i = s.size() - 1 ; i >= 0 ; i--)
        {
            if (s[i] == 'b')
            {
                for (int j = ans_vector.size() - 1; j >= 0; j--)
                {
                    if (ans_vector[j] >= 'a' && ans_vector[j] <= 'z' && ans_vector[j] != 'b')
                    {
                        ans_vector.erase(ans_vector.begin() + j);
                        break;
                    }
                }
            }
            else if (s[i] == 'B')
            {

                for (int j = ans_vector.size() - 1; j >= 0; j--)
                {
                    if (ans_vector[j] >= 'A' && ans_vector[j] <= 'Z' && ans_vector[j] != 'B')
                    {
                        ans_vector.erase(ans_vector.begin() + j);
                        break;
                    }
                }
            }
            else
            {
                ans_vector.push_back(s[i]);
            }
        }

        reverse(ans_vector.begin() , ans_vector.end());

        for (auto val : ans_vector)
        {
            cout << val;
        }
        cout << endl;
    }

    return 0;
}