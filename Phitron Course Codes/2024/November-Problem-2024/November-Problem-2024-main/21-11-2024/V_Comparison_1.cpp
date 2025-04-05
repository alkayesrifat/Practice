// link : https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/V
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

    if (s == '>')
    {
        if (a > b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if (s == '=')
    {
        if (a == b)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }

    return 0;
}