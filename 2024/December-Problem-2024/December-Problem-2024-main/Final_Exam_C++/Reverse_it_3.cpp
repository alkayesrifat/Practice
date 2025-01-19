#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n ; cin >> n ;

    Student array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i].nm >> array[i].cls >> array[i].s >> array[i].id ;
    }

    for (int i = 0,j=n-1; i < j; i++,j--)
    {
        Student temp;
        temp.s = array[i].s;
        array[i].s = array[j].s;
        array[j].s = temp.s;
    }
    

    for (int i = 0; i < n; i++)
    {
        cout << array[i].nm << " " << array[i].cls << " " << array[i].s<<" " << array[i].id<<endl;
    }
    

    return 0;
}
