// link : https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/U

#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin >> s;

    int  f[26] = {0};
    int len = s.size();
    for (int i = 0; i < len; i++)
    {
        if (s[i] == 'E' || s[i] == 'e')
        {

            f['e'-'a']++;
        }
        else if (s[i] == 'G' || s[i] == 'g')
        {
            f['g'-'a']++;
        }
        else if (s[i] == 'Y' || s[i] == 'y')
        {
            f['y'-'a']++;
        }
        else if (s[i] == 'P' || s[i] == 'p')
        {
            f['p'-'a']++;
        }
        else if (s[i] == 'T' || s[i] == 't')
        {
            f['t'-'a']++;
        }
    }
    int min1 = min(f['e'-'a'] , f['g'-'a']);
    int min2 = min(min1, f['y'-'a']);
    int min3 = min(min2, f['p'-'a']);

    int minn = min(min3,f['t'-'a']);
    cout << minn<<endl;
    return 0; 
}