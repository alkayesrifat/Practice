#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;
        int result;
    Student(string name,int roll,int result){
        this->name = name;
        this->roll = roll;
        this->result = result;
    }
};

class cmp{
    public:
        bool operator()(Student l , Student r){

            return l.result > r.result;

        }
};



int main(){


    priority_queue<Student,vector<Student>,cmp>pq;

    int n ; cin >> n;

    while (n--)
    {
        string s; cin >> s;
        int ro ; cin >> ro;
        int re ; cin >> re;
        Student obj(s,ro,re);
        pq.push(obj);
    }
    
    for (int i = 0; i < 4; i++)
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().result << endl;
        pq.pop();
    }
    



    
    return 0;
}