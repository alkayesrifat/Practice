#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};



int main(){

    int n ; cin>> n;
    
    Student array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }
    

    for (int i = 0,j = n-1; i < j; i++,j--)
    {
        Student temp = array[i] ;
        array[i] = array[j]; array[j] = temp;
    }
    
    
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }



    return 0;
}
