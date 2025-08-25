// https://leetcode.com/problems/reverse-words-in-a-string-iii/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        string result;


        stringstream ss(s);

        stack<string>stackstring;

        string word;

        while (ss >>  word)
        {
            reverse(word.begin(),word.end());
            stackstring.push(word);
        }

        result = result + stackstring.top();
        stackstring.pop();


        while (stackstring.empty() == false)
        {
            result = result + " " + stackstring.top() ;
            stackstring.pop();
        }

        return result;
        
        

        

        
        
    }
};


