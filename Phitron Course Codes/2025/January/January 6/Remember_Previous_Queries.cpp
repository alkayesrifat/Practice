#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> ll;

    int q;
    cin >> q;

    int x, v;
    int len = 0;

    while (q--)
    {
        cin >> x >> v;
        if (x == 0)
        {
            len++;
            ll.push_front(v);
        }
        else if (x == 1)
        {
            ll.push_back(v);
            len++;
        }
        else
        {
            if (v >= len)
            {
                 
            }
            
            else
            {
                ll.erase(next(ll.begin(), v));
                len--;
            }
            
        }
        cout << "L -> ";
        for (auto it = ll.begin(); it != ll.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
        cout << "R -> ";
        for (auto it = --ll.end(); it != --ll.begin(); it--)
        {
            cout << *it << " ";
        }
        cout << endl;
    }

    return 0;
}
