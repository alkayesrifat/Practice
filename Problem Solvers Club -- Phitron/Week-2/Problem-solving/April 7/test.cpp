#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int testcase;
    cin >> testcase;

    while (testcase--)
    {

        int num;
        cin >> num;

        int owo = 100 - num;

        int r = owo / 10;

        cout << r * 10 << endl;
    }
}
