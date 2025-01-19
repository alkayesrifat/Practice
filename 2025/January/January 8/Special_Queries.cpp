#include<bits/stdc++.h>
using namespace std;

int main(){

    int test ; cin >> test ;
    queue<string>st;

    while (test--)
    {
        int zoro; cin >> zoro;   string name ; 
        if (zoro == 0)
        {
             cin >> name;
        }
        
        


        if (zoro == 0)
        {
            st.push(name);
        }
        else if(zoro == 1)
        {
          
            if (st.empty() == true)
            {
                
                cout << "Invalid" << endl;
            }
            else
            {
           
                cout << st.front() << endl;
                st.pop();
            }
            
            
        }
        
        
        
    }

    
    
    

    return 0;
}