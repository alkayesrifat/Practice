/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-15   22:23:26
 * ---------------------
 * Problem Link:
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

        multiset<int> jor;
        multiset<int> bijor;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2 == 0)
            {
                jor.insert(i);
            }
            else
            {
                bijor.insert(i);
            }
        }

        // for (auto x : jor)
        // {
        //     cout << x << " ";
        // }
        // cout << endl;

        // for (auto x : bijor)
        // {
        //     cout << x << " ";
        // }

        for (int i = 0; i < n - 1; i++)
        {
            if (jor.size() > 1)
            {
                int result = (*--jor.end() + *-- --jor.end()) / 2;

                // cout << *--jor.end() << " " << *-- --jor.end() << endl;

                jor.erase(--jor.end());
                jor.erase(-- --jor.end());

                if (result % 2 == 0)
                {
                    jor.insert(result);
                }
                else
                {
                    bijor.insert(result);
                }
            }
            else if (bijor.size() > 1)
            {
                int result = (*--bijor.end() + *-- --bijor.end()) / 2;

                // cout << *--bijor.end() << " " << *-- --bijor.end() << "-";

                bijor.erase(--bijor.end());
                bijor.erase(-- --bijor.end());

                if (result % 2 == 0)
                {
                    jor.insert(result);
                }
                else
                {
                    bijor.insert(result);
                }

                // for (auto x : bijor)
                // {
                //     cout << x << " ";
                // }
                cout << endl;
            }
            else
            {

                if (jor.empty() == false && bijor.empty() == false)
                {
                    int result = (*--jor.end() + *--bijor.end()) / 2;

                    // cout << *--jor.end() << " " << *--bijor.end() << endl;

                    jor.erase(--jor.end());
                    bijor.erase(--bijor.end());

                    if (result % 2 == 0)
                    {
                        jor.insert(result);
                    }
                    else
                    {
                        bijor.insert(result);
                    }
                }
            }
        }
        // cout << endl
        //      << endl;
        // for (auto x : jor)
        // {
        //     cout << x << " ";
        // }
        // cout << endl
        //      << endl;
        // for (auto x : bijor)
        // {
        //     cout << x << " ";
        // }
    }

    return 0;
}