#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
#define endl "\n"

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<bool> v(n + 1, true);

    for (int i = 2; i <= n; i++)
    {
        if (v[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                v[j] = false;
            }
        }
    }
    vector<int>vv;
    for (int i = 2; i <= n ; i++)
    {
        if(v[i]){
            vv.push_back(i);
        }
    }
    

    map<int, int> fac;
    int ind = 0;

    while (n > 1)
    {
        while (true)
        {
            if (n % vv[ind] != 0)
                break;
            n = n / vv[ind];
            fac[vv[ind]]++;
        }
        ind++;
    }

    for (auto x : fac)
    {
        cout << x.first  << " -> "<< x.second << endl;
    }

    return 0;
}