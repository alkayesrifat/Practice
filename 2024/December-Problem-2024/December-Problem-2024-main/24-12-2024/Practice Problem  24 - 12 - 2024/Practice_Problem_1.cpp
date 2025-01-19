#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

void add_to_tail(Node *&head, Node *&tail, int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode;
}

bool is_samee(Node *head1, Node *head2)
{

    while (head1 != NULL && head2 != NULL)
    {
        if (head1->value != head2->value)
        {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    return true;
}

int count_ll(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

int main()
{

    Node *head1 = NULL;
    Node *tail1 = NULL;

    int v1;
    while (1)
    {
        cin >> v1;
        if (v1 == -1)
        {
            break;
        }
        add_to_tail(head1, tail1, v1);
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

    if (count_ll(head1) == count_ll(head2))
    {

        if (is_samee(head1, head2))
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