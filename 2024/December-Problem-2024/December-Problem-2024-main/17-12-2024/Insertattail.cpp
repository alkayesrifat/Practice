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

void print_linked_list(Node *head)
{

    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
}

void insert_at_tail(Node* &head,int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

int main()
{

    Node *head = new Node(80);
    Node *a = new Node(354654);
    Node *b = new Node(32544560);
    head->next = a;
    a->next = b;

    print_linked_list(head);

    cout << endl << endl << endl;
    insert_at_tail(head,143);

    print_linked_list(head);

    return 0;
}