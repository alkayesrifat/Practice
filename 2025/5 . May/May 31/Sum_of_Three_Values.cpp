/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-31   11:10:48
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum;
    cin >> n >> sum;

    vector<pair<int, int>> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i].first;
        v[i].second = i;
    }

    sort(v.begin(), v.end());

    bool flag = false;

    int first = -1, second = -1, third = -1;

    for (int i = 0; i < n; i++)
    {

        if (flag)
        {
            break;
        }

        int weneed = sum - v[i].first;

        int l = i + 1, r = n - 1;

        while ((l < n && r < n) && l != r)
        {
            int crrsum = v[l].first + v[r].first;

            if (crrsum > weneed)
            {
                r--;
            }
            else if (crrsum < weneed)
            {
                l++;
            }
            else if (crrsum == weneed)
            {
                flag = true;
                first = v[i].second, second = v[l].second, third = v[r].second;
                break;
            }
        }
    }

    if (flag)
    {
        cout << first + 1 << " " << second + 1 << " " << third + 1;
    }
    else
    {
        cout << "IMPOSSIBLE";
    }

    return 0;
}