// Link : https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/find-jessica


#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    getline(cin , s);
    stringstream ss(s);
    string word;
   
    int isf = 0;

    while (ss >> word)
    {
        if (word == "Jessica" )
        {
            isf = 1;
            break;
        }
        
    }
    if (isf == 1)
    {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }
    
    





    return 0;
}