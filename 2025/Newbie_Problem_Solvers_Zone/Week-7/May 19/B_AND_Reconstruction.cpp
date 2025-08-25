/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-19   05:41:58
 * ---------------------
 * Portfolio  : https://alkayesrifat.netlify.app/
 * Blog       : https://alkayesblog.netlify.app/
 * Github     : https://github.com/alkayesrifat
 * Linkedin   : https://linkedin.com/in/alkayesrifat
 * CodeForces : https://codeforces.com/profile/alkayesrifat
 * CodeChef   : https://www.codechef.com/users/focus_magpies
 * Leetcode   : https://leetcode.com/u/alkayesrifat/
 * Clist      : https://clist.by/
 * LinkTree   : https://linktr.ee/alkayesrifat/
 */
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> b(n - 1);
        for (int i = 0; i < n - 1; i++) {
            cin >> b[i];
        }

        vector<int> a(n);
        a[0] = b[0];
        for (int i = 1; i < n - 1; i++) {  
            a[i] = b[i - 1] | b[i];
        }
        a[n - 1] = b[n - 2];

        bool valid = true;
        for (int i = 0; i < n - 1; i++) {  
            if ((a[i] & a[i + 1]) != b[i]) {
                valid = false;
                break;
            }
        }

        if (!valid) {
            cout << -1 << '\n';
        } else {
            for (auto x : a)
                cout << x << ' ';
            cout << '\n';
        }
    }

    return 0;
}


/**
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