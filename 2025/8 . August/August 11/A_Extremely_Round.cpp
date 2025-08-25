/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 11/08/2025 (Monday)
 * Time       : 08:53
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test_case;
    cin >> test_case;
    while (test_case--)
    {
        int n;
        cin >> n;

        int cnt = 0;

        int j = 0;

        for (int i = 1; i <= n; j++)
        {
            string s = to_string(i);
            
            string num = "1";
            for(int k = 1 ; k < s.size();k++){
                num = num+'0';
            }
            int val = stoi(num);
            i = i + val;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}