/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/06/2025 (Wednesday)
 * Time       : 06:31
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

    vector<long long int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int q;
    cin >> q;

    while (q--)
    {
        long long int k;
        cin >> k;

        int l = 0;
        int r = n - 1;

        long long int shortt = -1;
        long long int longg = LONG_LONG_MAX;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] < k)
            {
                shortt = max(shortt, v[mid]);
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        l = 0 , r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (v[mid] > k)
            {
                longg = min(longg, v[mid]);
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }

        if (shortt == - 1)
        {
            cout << 'X' << " ";
        }
        else{
            cout << shortt << " ";
        }

        if (longg == LONG_LONG_MAX)
        {
            cout << 'X' <<endl;
        }
        else{
            cout << longg <<endl;
        }

        
    }

    return 0;
}
