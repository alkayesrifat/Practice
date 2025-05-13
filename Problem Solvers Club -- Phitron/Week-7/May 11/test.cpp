/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-13   10:12:00
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k = 29;
    int cnt = 0;

    while (k > 0)
    {
        cnt++;
        k = k - 15;
    }

    cout << cnt;

    return 0;
}