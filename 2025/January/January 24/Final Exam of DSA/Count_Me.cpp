#include<bits/stdc++.h>
using namespace std;

int main(){

    int t; 
    cin >> t;
    
    cin.ignore();

    while(t--){
        string st;
       
        getline(cin,st);
      

        stringstream sm(st);

        string word;

        string more;

        map<string,int>mp;

        int mor = 0;
        while (sm >> word)
        {
            mp[word]++;
            if (mp[word] > mor)
            {
                more = word;
                mor = mp[word];
            }
            
        }
        cout << more << " " << mp[more] << endl;

        
    
    }

    return 0;
}