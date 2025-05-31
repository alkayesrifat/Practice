/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-05-29   11:31:18
 * Portfolio  : alkayesrifat.netlify.app
 * ---------------------
 */

#include <bits/stdc++.h>
using namespace std;
bool check_kth_bit_on_or_off(int n, int k)
{
    return ((n >> k) & 1);
}
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

        vector<int> v(32);

        for (int i = 0; i < 32; i++)
        {
            if (check_kth_bit_on_or_off(n, i))
            {
                v[i] = 1;
            }
        }
        int i = 0;

        while (i < 32)
        {

            if (v[i] == 1)
            {
                int l = i, r = -1;
                while (v[i] != 0 && i < 32)
                {
                    v[i] = 0;
                    i++;
                    r = i;
                }
                if (r - l + 1 > 2)
                {
                    v[l] = -1;
                    v[r] = 1;
                }
                else
                {
                    v[l] = 1;
                }
            }
            else
            {
                i++;
            }
        }

        cout << v.size() << endl;



        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << '\n';
    }

    return 0;
}