// Link : https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word


#include<bits/stdc++.h>
using namespace std;

int main(){

    int test ; cin >> test ;
    for (int i = 0; i < test; i++)
    {
        string s; cin >> s;
        string x ; cin >> x;        int len = x.size();
        
        while ((s.find(x)) != -1)
        {
            int index = s.find(x);
            s.replace(index,len,"#");

        }
        
        cout  << s << endl;
    }
    




    return 0;
}