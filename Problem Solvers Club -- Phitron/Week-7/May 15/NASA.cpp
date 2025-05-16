/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-15   18:03:04
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int maxx = (1LL << 15);
vector<int> allpali;

bool palindrom(int n)
{

    string x = to_string(n);

    string t = x;

    reverse(t.begin(), t.end());

    return x == t;
}

void pali()
{
    for (int i = 0; i <= maxx; i++)
    {
        if (palindrom(i))
        {
            allpali.push_back(i);
        }
    }
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    pali();

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> findd((maxx + 1));

        vector<int> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            findd[v[i]]++;
        }

        long long int ans = n;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allpali.size(); j++)
            {
                int crnt = (v[i] ^ allpali[j]);
                ans = ans + findd[crnt];
            }
        }

        cout << (ans / 2) << endl;
    }

    return 0;
}