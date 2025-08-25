/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 02/08/2025 (Saturday)
 * Time       : 16:13
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

        int re = 0 ;
        int jj = 1;

        for (int i = 1; i <= n; i++)
        {
            // cout << 2 * i - 1 << ' ';
            for(int j = jj;j<=9000;j++){
                if(j % i == re){
                    jj = j +1;
                    re++;
                    cout << j << " ";
                    break;
                }
            }
        }

        cout << endl;
    }

    return 0;
}