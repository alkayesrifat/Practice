#include <bits/stdc++.h>
using namespace std;
/*
Type one ->

int fib(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 0)
    {
        return 0;
    }

    int fi = fib(n - 1) + fib(n - 2);
    return fi;
}

*/
/*
Type Two ->

int fib(int n)
{
    if (n == 1 || n ==0)
    {
        return n;
    }
    

    int fi = fib(n - 1) + fib(n - 2);
    return fi;
}
*/

// type 3->
int fib(int n)
{
    if (n < 2 )
    {
        return n;
    }
    

    int fi = fib(n - 1) + fib(n - 2);
    return fi;
}

int main()
{
    int n ;cin >> n ;

    cout << fib(n);
    return 0;
}