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

void insert_at_tail(Node* &head,Node* &tail,int val)
{

    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    
    tail->next = newnode;
    tail = newnode;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;

    print_linked_list(head);

    cout << endl << endl << endl;
    insert_at_tail(head,tail,143);
    insert_at_tail(head,tail,143);
    insert_at_tail(head,tail,143);
    insert_at_tail(head,tail,143);
    insert_at_tail(head,tail,143);
    insert_at_tail(head,tail,143);


    print_linked_list(head);

    return 0;
}