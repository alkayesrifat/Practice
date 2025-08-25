/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-22   12:15:53
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
    int n2 = n;
    int four = 0;
    int sev = 0;

    int i = 1;
    vector<int> v;

    while (n > 0)
    {
        int t = n % 10;
        if (t == 4)
        {
            four++;
        }
        else
        {

            sev++;
            v.push_back(i);
        }

        n = n / 10;
        i++;
    }

    int total_digit = four + sev;

    int first = (1LL << total_digit);

    first--;
    long long sec = 0;

    for (auto val : v)
    {
        val = val - 1;

        sec = sec + (1LL << val);
        // cout << val << endl;
    }

    cout << first + sec;

    return 0;
}