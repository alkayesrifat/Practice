/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-27   11:59:07
 * ---------------------
 * Problem Link: https://codeforces.com/problemset/problem/1703/C
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
        int whilenumber;
        cin >> whilenumber;
        vector<int> whilearray(whilenumber);
        for (int i = 0; i < whilenumber; i++)
        {
            cin >> whilearray[i];
        }

        for (int i = 0; i < whilenumber; i++)
        {
            int n;
            cin >> n;
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                if (s[j] == 'D')
                {
                    if (whilearray[i] == 9)
                    {
                        whilearray[i] = 0;
                    }
                    else
                    {
                        whilearray[i] ++;
                    }
                }
                else
                {
                    // u
                    if (whilearray[i] == 1)
                    {
                        whilearray[i] = 0;
                    }
                    else if(whilearray[i] == 0){
                        whilearray[i] = 9;
                    }
                    else
                    {
                        whilearray[i] --;
                    }
                }
            }
        }
        for (auto num : whilearray)
        {
            cout << num << " ";
        }
        cout << endl;
        
    }

    return 0;
}