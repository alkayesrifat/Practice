/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-20   17:49:37
 * ---------------------
 * Portfolio  : https://alkayesrifat.netlify.app/
 * Blog       : https://alkayesblog.netlify.app/
 * Github     : https://github.com/alkayesrifat
 * Linkedin   : https://linkedin.com/in/alkayesrifat
 * CodeForces : https://codeforces.com/profile/alkayesrifat
 * CodeChef   : https://www.codechef.com/users/focus_magpies
 * Leetcode   : https://leetcode.com/u/alkayesrifat/
 * Clist      : https://clist.by/coder/alkayesrifat/
 * LinkTree   : https://linktr.ee/alkayesrifat/
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int maxbit = 30;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(maxbit);

        for (int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            v[__lg(x)]++;
        }

        long long ans = 0;

        for (int i = 0; i < maxbit; i++)
        {
            long long int temp = (1LL * v[i] * (v[i] - 1)) / 2;
            ans = ans + temp;
        }

        cout << ans << endl;
    }

    return 0;
}
/**
.
.
.
.
.
.
.
.
.
.
.
.
->
 * CodeForces   : https://codeforces.com/profile/alkayesrifat
 * CodeChef     : https://www.codechef.com/users/focus_magpies
 * LeetCode     : https://leetcode.com/alkayesrifat
 * HackerRank   : https://www.hackerrank.com/alkayesrifat47
 * CodingNinjas : https://www.codingninjas.com/studio/profile/alkayesrifat
 * GeeksforGeeks: https://auth.geeksforgeeks.org/user/alkayesrifat
 * AtCoder      : https://atcoder.jp/users/alkayesrifat
 * VJudge       : https://vjudge.net/user/alkayesrifat
 * InterviewBit : https://www.interviewbit.com/profile/alkayesrifat
 * LightOJ      : https://lightoj.com/user/alkayesrifat
 * HackerEarth  : https://www.hackerearth.com/@alkayesrifat47
 */