#include<bits/stdc++.h>
using namespace std;

int main(){


    map<string,int>m;

    m["kayes"] = 500;
    m["korim"] = 800;
    m["tahsin"] = 852;

    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first <<  " " << it->second << endl;
    }

    // cout << m["hamas"]<<endl;

    cout << m.count("hamas");

    if (m.count("hamas"))
    {
        cout << endl << "ace" ;
    }
    else
    {
        cout << "nai";
    }
    
    
    
    
    return 0;
}