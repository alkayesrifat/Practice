/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-21   05:08:31
 * Portfolio  : https://alkayesrifat.netlify.app/
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, k;
    cin >> n >> m >> k;

    vector<int> varatia(n);

    for (int i = 0; i < n; i++)
    {
        cin >> varatia[i];
    }

    vector<int> vara(m);

    for (int i = 0; i < m; i++)
    {
        cin >> vara[i];
    }

    sort(varatia.begin(), varatia.end());
    sort(vara.begin(), vara.end());

    int cnt = 0;

    int l = 0, i = 0;

    while (l < n)
    {
        while (i < m && vara[i] < varatia[l] - k)
        {
            i++;
        }
        if (vara[i] <= varatia[l] + k && vara[i] >= varatia[l] - k)
        {
            cnt++;
            i++;
            l++;
        }
        else
        {
            l++;
        }
    }

    cout << cnt << endl;

    return 0;
}