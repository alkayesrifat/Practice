#include <bits/stdc++.h>

using namespace std;

int main()
{
    list<int> ll;
    int n;
    while (cin >> n)
    {
        if (n == -1)
        {
            break;
        }
        
        ll.push_back(n);
    }


    
    ll.sort();
    ll.unique();



    for (auto it = ll.begin(); it != ll.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}
