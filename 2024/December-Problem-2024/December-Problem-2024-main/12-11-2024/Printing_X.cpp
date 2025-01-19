#include<bits/stdc++.h>
using namespace std;

int main(){

    int n ;cin >>n;
    int some = ((n+1)/2)-1;
    int space2 = n-2;
    int space1 = 0;
    for (int first = 0; first < some; first++)
    {
        for (int i = 0; i < space1; i++)
        {
            cout << " ";
        }
        space1++;cout<<"\\";
        for (int i = 0; i < space2; i++)
        {
            cout<<" ";
        }
        space2 = space2 - 2;
        cout << "/";
        cout << endl;
    }
    //lkaj;dfj;sadjf;sldajf;lsdkfjs;dafj;sdlfj;lsd
    some = ((n+1)/2)-1;
    for (int i = 0; i < some; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    
    space2 = 1;
    space1 =((n+1)/2)-2;
    for (int first = 0; first < some; first++)
    {
        for (int i = 0; i < space1; i++)
        {
            cout << " ";
        }
        space1--;cout<<"/";
        for (int i = 0; i < space2; i++)
        {
            cout<<" ";
        }
        space2 = space2 + 2;
        cout << "\\";
        cout << endl;
    }
    
    return 0;
}