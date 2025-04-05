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


void print_linked_list_reverse(Node *head)
{

    
    if (head == NULL)
    {
        return;
    }
    
    print_linked_list_reverse(head->next);

    cout << head->value << " ";
    
    
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

    int value;
    while (1)
    {
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head,tail,value);
        
    }
    

    print_linked_list_reverse(head);

    return 0;
}