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

void add_to_tail(Node *&head, Node *&tail, int value)
{

    Node *newnode = new Node(value);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

bool is_same_to_same(Node *head, Node *head2)
{

    Node *temp = head;
    Node *temp2 = head2;

    while (temp != NULL && temp2 != NULL)
    {
        if (temp->value != temp2->value)
        {
            return false;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }
    return true;
}

int count_linked_list(Node *head)
{
    Node *temp = head;
    int countt = 0;
    while (temp != NULL)
    {
        countt++;
        temp = temp->next;
    }
    return countt;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
    int v;
    while (1)
    {
        cin >> v;
        if (v == -1)
        {
            break;
        }
        add_to_tail(head, tail, v);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int v2;
    while (1)
    {
        cin >> v2;
        if (v2 == -1)
        {
            break;
        }
        add_to_tail(head2, tail2, v2);
    }


    if (count_linked_list(head) == count_linked_list(head2))
    {
        if (is_same_to_same(head, head2))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }
    
    return 0;
}