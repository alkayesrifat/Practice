#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;

    getline(cin,s);

    stringstream ss(s);

    string word;

    map<string , int>mp;


    while (ss >> word)
    {
        mp[word]++;
    }

    for (auto i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << " " << i->second <<endl;
    }
    
    



    return 0;
}