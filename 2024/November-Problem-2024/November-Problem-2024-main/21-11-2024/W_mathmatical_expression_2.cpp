// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/W

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a;
    cin >> a;
    char s;
    cin >> s;
    int b;
    cin >> b;
    char l;
    cin >> l;
    int c;
    cin >> c;

    if (s == '+')
    {
        if (a + b==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a + b  << endl;
        }
    }
    else if (s == '-')
    {
        if (a - b==c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a - b  << endl;
        }
    }
    else if (s == '*')
    {
        if (a * b == c)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << a * b  << endl;
        }
    }

    return 0;
}
