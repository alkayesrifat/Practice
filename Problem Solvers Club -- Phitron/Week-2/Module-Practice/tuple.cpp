/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-04-06   08:50:05
 * ---------------------
 * Problem Link:
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string,int,string>t;

    // t = {"korim",20,"01842243235"};

    // cout << get<0>(t) << " " << get<1>(t) << " " << get<2>(t) << '\n';

    // auto [name,roll,phonenumber] = t;

    // cout << name << " " << roll << " " << phonenumber << '\n' ;

    int n;
    cin >> n;

    tuple<string, int, string> t[n];

    for (int i = 0; i < n; i++)
    {
        cin >> get<0>(t[i]) >> get<1>(t[i]) >> get<2>(t[i]);
    }

    for (int i = 0; i < n; i++)
    {
        cout << get<0>(t[i]) << " " << get<1>(t[i]) << " " << get<2>(t[i]) << endl;
    }

    for (auto [name, roll, number] : t)
    {
        cout << name << " " << roll << " " << number << "\n";
    }

    return 0;
}