#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        for(int i  = 0 ; i  < spaces.size();i++){
            s.insert(spaces[i]," ");
        }
        cout << s ;
    }
};