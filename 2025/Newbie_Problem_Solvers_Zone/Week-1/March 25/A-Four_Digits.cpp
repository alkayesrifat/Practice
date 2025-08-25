/**
 * All Praise to Allah
 * ---------------------
 * Author: Al Kayes Rifat
 * Created: 2025-03-25   14:44:46
 * ---------------------
 * Problem Link: https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
 */

#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

   

    stack<int> st;

    while (n)
    {
        st.push(n % 10);
        n = n / 10;
    }

    int size = st.size();

    if (size == 0)
    {
        cout << "0000";
    }
    else if (size == 1)
    {
        cout << "000" << st.top();
    }
    else if (size == 2)
    {
        cout << "00" << st.top();
        st.pop();
        cout << st.top();
    }
    else if (size == 3)
    {
        cout << "0" << st.top();
        st.pop();
        cout << st.top();
        st.pop();
        cout << st.top();
        
    }
    else
    {
        
        cout << st.top();
        st.pop();
        cout << st.top();
        st.pop();
        cout << st.top();
        st.pop();
        cout << st.top();
        
        
        
    }
    
    

    return 0;
}