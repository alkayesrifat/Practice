#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
    }
};

void addback(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
    }
    tail->next = newnode;
    tail = newnode;
}

bool isdupli(Node *head)
{

    Node *outer = head;
    while (outer != NULL)
    {
        Node *inner = outer->next;
        while (inner != NULL)
        {
            if (inner->value == outer->value)
            {
                return true;
            }
            inner = inner->next;
        }

        outer = outer->next;
    }




}



int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        int num;
        cin >> num;
        if (num == -1)
        {
            break;
        }
        addback(head, tail, num);
    }

    if (isdupli(head))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}