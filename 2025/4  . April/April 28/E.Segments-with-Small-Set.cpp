/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-28   11:51:56
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long int n, k;
    cin >> n >> k;

    vector<long long int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long int l = 0, r = 0, ans = 0;

    map<long long int, long long int> mp;

    while (r < n)
    {
        mp[a[r]]++;

        if (mp.size() <= k)
        {
            // ans++;
            ans = ans + (r - l + 1);
        }
        else
        {
            while (mp.size() > k && l <= r)
            {
                mp[a[l]]--;
                if (mp[a[l]] == 0)
                {
                    mp.erase(mp.find(a[l]));
                }
                l++;
            }
            if (mp.size() <= k)
            {

                // ans++;
                ans = ans + (r - l + 1);
            }
        }
        r++;
    }
    // ans = ans * (k + 1);
    cout << ans << endl;

    return 0;
}