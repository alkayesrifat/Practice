/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 31/07/2025 (Thursday)
 * Time       : 15:06
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


        vector<int> t(n);
        vector<int> s(n);
        int maxx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            cin >> t[i];
            
        }
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            maxx = max(s[i],maxx);
            
        }

        int sum = 0;

        for (int i = 1; i <= maxx; i++)
        {
            int crrsum = 0 ;
            for (int j = 0; j < n; j++)
            {
                if(s[j] <= i && t[j]>=0){
                    crrsum+=t[j];
                }
            }
            sum = max(sum,crrsum - i);
            
        }

        cout << sum << endl;
        

        
    }

    return 0;
}