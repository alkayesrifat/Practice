#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int result;
    Student(string name, int roll, int result)
    {
        this->name = name;
        this->roll = roll;
        this->result = result;
    }
};

class cmp
{
public:
    bool operator()(Student l, Student r)
    {

        if (l.result < r.result)
        {
            return true;
        }
        else if (l.result > r.result)
        {
            return false;
        }
        else
        {
            return l.roll > r.roll;
        }
    }
};

int main()
{

    priority_queue<Student, vector<Student>, cmp> pq;

    int n;
    cin >> n;

    while (n--)
    {
        string name;
        cin >> name;
        int roll;
        cin >> roll;
        int result;
        cin >> result;
        Student obj(name, roll, result);
        pq.push(obj);
    }

    int t; cin >> t;

    while (t--)
    {
        int q ; cin >> q;
        if (q == 2)
        {
            if (pq.empty() == false)
            {
                pq.pop();

                if(pq.empty() == true) cout << "Empty" <<endl;
                else
                    cout << pq.top().name << " " << pq.top().roll << " " << pq.top().result << endl;
            }
            
        }
        if (q == 1)
        {
            if(pq.empty() == true) cout << "Empty" <<endl;
            else
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().result << endl;
        }
        
        
        if (q == 0)
        {
            string name;
            cin >> name;
            int roll;
            cin >> roll;
            int result;
            cin >> result;
            Student obj(name, roll, result);
            pq.push(obj);
            cout << pq.top().name << " " << pq.top().roll << " " << pq.top().result << endl;
        }
    }



    return 0;
}