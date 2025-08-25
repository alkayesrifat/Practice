#include <bits/stdc++.h>

using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student l, Student r)
{

    if (l.eng_marks > r.eng_marks)
    {
        return true;
    }
    else if (l.eng_marks < r.eng_marks)
    {
        return false;
    }
    else
    {
        if (l.math_marks > r.math_marks)
        {
            return true;
        }
        else if (l.math_marks < r.math_marks)
        {
            return false;
        }
        else{
            return l.id < r.id;
        }
    }
}

int main()
{
    int n;
    cin >> n;

    Student array[n];

    for (int i = 0; i < n; i++)
    {
        cin >> array[i].nm >> array[i].cls >> array[i].s >> array[i].id >> array[i].math_marks >> array[i].eng_marks;
    }

    sort(array, array + n, cmp);

    for (int i = 0; i < n; i++)
    {
        cout << array[i].nm << " " << array[i].cls << " " << array[i].s << " " << array[i].id << " " << array[i].math_marks << " " << array[i].eng_marks << endl;
    }

    return 0;
}
