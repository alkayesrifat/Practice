#include <bits/stdc++.h>
using namespace std;
#define ll long long


void solve()
{
    ll n, x;
    cin >> n >> x;
    string s;
    cin >> s;
    x--;
    ll l = -1, r = n;
    for(int i = x - 1; i >= 0; i--)
    {
        if(s[i] == '#')
        {
            l = i;
            break;
        }
    }

    for(int i = x + 1; i < n; i++)
    {
        if(s[i] == '#')
        {
            r = i;
            break;
        }
    }

    

    cout <<min(x + 1, n - r + 1) << " " << min(l + 2, n - x) << '\n';



}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }


    return 0;
}
