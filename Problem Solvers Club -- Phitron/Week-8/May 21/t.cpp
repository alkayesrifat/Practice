#include <iostream>
using namespace std;

int main()
{
    int n = 1000;
    int j = 1;

    for (int i = n; i >= 1; i--)
    {
        cout << i << "\t";
        j++;

        if (j % 5 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;

    return 0;
}