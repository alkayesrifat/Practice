#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int roll;
    Student(string name, int roll){
        this->name = name;
        this->roll = roll;
    }
};
class cmp{
    public:
        bool operator()(Student l , Student r){

            if (l.name > r.name)
            {
                return true;
            }
            else if (l.name < r.name)
            {
                return false;
            }
            else
            {
                return l.roll < r.roll;
            }
            
            

        }
};


int main(){

    

    priority_queue<Student,vector<Student>,cmp>a;

    int n;cin >> n; int nn ; nn = n;

    while (n--)
    {
        string s;
        cin >> s;
        int r; cin >> r;
        Student obj(s,r);
        a.push(obj);
    }

    for (int i = 0; i < nn; i++)
    {
        cout << a.top().name << " " << a.top().roll << endl; 
        a.pop();
    }
    
    

    return 0;
}