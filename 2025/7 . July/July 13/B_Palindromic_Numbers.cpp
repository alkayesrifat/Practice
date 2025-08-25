/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Portfolio  : alkayesrifat.netlify.app
 * Date       : 13/07/2025 (Sunday)
 * Time       : 08:26
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        string num;
        cin >> num;

        if (num[0] == '9')
        {
            vector<int>nin;
            vector<int>one(n,1);
            one[n-1]=2;

            for (int i = 0; i < n; i++)
            {
                int number = num[i] - '0';
                nin.push_back(9 - number);
            }

            vector<int> res(n);
            int carry = 0;

            for (int i = n - 1; i >= 0; i--) {
                int sum = nin[i] + one[i] + carry;
                res[i] = sum % 10;
                carry = sum / 10;
            }

            for(auto x : res){
                cout << x;
            }
            cout << endl;




            



        }
        else
        {

            vector<int> ans;

            for (int i = 0; i < n; i++)
            {
                int number = num[i] - '0';
                ans.push_back(9 - number);
            }

            for (auto x : ans)
            {
                cout << x;
            }
            cout << "\n";
        }
    }

    return 0;
}