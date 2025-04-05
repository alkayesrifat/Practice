#include<bits/stdc++.h>
using namespace std;

int isit(){
    string s;   cin  >>s ; int len = s.size();

    stack<char>st;

    for (int i = 0; i < len; i++)
    {
        if (st.empty() == true)
        {
            st.push(s[i]);
        }
        else
        {
            if ((st.top() == '0' && s[i] == '1') )
            {
                st.pop();
            }
            else
            {
                st.push(s[i]);
            }
            
            
        }
        
        
    }

    if (st.empty() == true)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    


    
}

int main(){

    
    int t ;
    cin >> t ;

    while (t--)
    {

        if (isit() == 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
        
    }
    





    return 0;
}