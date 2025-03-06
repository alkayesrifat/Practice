#include <bits/stdc++.h>
using namespace std;

void digit(int n)
{

    if (n == 0)
    {

        return;
    }

    digit(n / 10);
    cout << n % 10 << " ";
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        digit(n);
        cout << endl;
    }

    return 0;
}