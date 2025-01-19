#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin , s);

    string x ; cin >> x; int len = x.size();

    int count = 0;
    
    stringstream ss(s);
    string word ;
    while (ss >> word)
    {
        if (word == x)
        {
            count ++;
        }
        
    }
    cout << count;
    

    // cout << s << endl << x ;

    return 0;
}