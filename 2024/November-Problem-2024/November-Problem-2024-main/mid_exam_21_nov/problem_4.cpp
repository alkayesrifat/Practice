#include <bits/stdc++.h>

using namespace std;

class student{
    public:
    int id;
    char name[100];
    char section;
    int mark;
};


int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        
        student a[3];
        
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].id >> a[i].name >> a[i].section >> a[i].mark;
        }
        student ma =a[0];
        for (int i = 0; i <3; i++)
        {
            if (a[i].mark > ma.mark)
            {
                ma = a[i];
            }
            
        }
        cout << ma.id << " "<< ma.name << " "<< ma.section << " "<< ma.mark << endl;
        


    }
    // cout << a.id << a.name << a.section << a.mark

    return 0;
}
