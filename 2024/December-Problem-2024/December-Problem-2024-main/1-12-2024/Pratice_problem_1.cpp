#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    int marks;
};

bool comp(Student l , Student r){
    if (l.marks > r.marks )
    {
        return true;
    }
    else if (l.marks < r.marks)
    {
        return false;
    }
    else if (l.marks == r.marks)
    {
        if (l.roll < r.roll)
        {
            return true;
        }
        else{
            return false;
        }
        
    }
    
    
    
}

int main(){

    int n ; cin>> n;
    
    Student array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i].name >> array[i].roll >> array[i].marks;
    }
    sort(array,array+n,comp);
    
    for (int i = 0; i < n; i++)
    {
        cout << array[i].name << " " << array[i].roll << " " << array[i].marks << endl;
    }



    return 0;
}