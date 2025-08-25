/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-24   09:40:35
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> pos(n + 1);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        pos[val] = i;
    }

    int count = 1;

    for (int i = 1; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
