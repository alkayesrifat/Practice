/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   11:22:18
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> ticket(n), myprice(m);

    for (int i = 0; i < n; i++)
    {
        cin >> ticket[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> myprice[i];
    }

    int i = 0, j = 0;

    int maxx = INT_MIN;

    vector<int> ans;

    while (i < m)
    // while (j < n)
    {
        if (ticket[j] <= myprice[i])
        {
            maxx = (maxx, ticket[j]);
            j++;
        }
        else
        {
            if (maxx != INT_MIN)
            {
                ans.push_back(myprice[i]);
            }
            else
            {
                ans.push_back(-1);
            }

            i++;
        }
    }

    reverse(ans.begin(), ans.end());

    for (auto y : ans)
    {
        cout << y << endl;
    }

    return 0;
}