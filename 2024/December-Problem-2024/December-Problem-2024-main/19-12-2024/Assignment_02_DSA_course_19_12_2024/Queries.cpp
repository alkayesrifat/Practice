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

void insert_at_head(Node *&head, int val)
{
    Node *newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}

void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node *newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}


void delete_at_head(Node *&head)
{

    Node *deletenode = head;
    head = head->next;
    delete deletenode;
}

void delete_at_tail(Node* head, Node* &tail,int value) {
    if (head == tail) { 
        delete tail;
        head = tail = NULL;
        return;
    }
    Node* tmp = head;
    while (tmp->next != tail) { 
        tmp = tmp->next;
    }
    delete tail;
    tail = tmp;
    tail->next = NULL;
}


void delete_at_any_pos(Node* head, int idx)
{
    Node* tmp = head;
    for(int i=1;i<idx;i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
}



void print_linked_list(Node *head)
{

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{

    Node *head = NULL;
    Node *tail = NULL;
  
    int test_case;
    cin >> test_case;
    int x, v;
    int lengthofll = 0;
    for (int i = 0; i < test_case; i++)
    {
        cin >> x >> v;

        if (x == 0)
        {
            if (lengthofll == 0)
            {
                insert_at_tail(head, tail,v);
                lengthofll++;
                print_linked_list(head);
            }
            else
            {
                insert_at_head(head, v);
                lengthofll++;
                print_linked_list(head);
            }
        }
        else if (x == 1)
        {
            insert_at_tail(head,tail, v);
            lengthofll++;
            print_linked_list(head);
        }
        else if (x == 2)
        {
            
            
            if (v < lengthofll)
            {
                if (v == 0)
                {
                    delete_at_head(head);
                    lengthofll--;
                    print_linked_list(head);
                }
                else if (v == lengthofll-1)
                {
                    delete_at_tail(head,tail,v);
                    lengthofll--;
                    print_linked_list(head);
                }
                
                else
                {
                    delete_at_any_pos(head, v);
                    lengthofll--;
                    print_linked_list(head);
                }
            }
            else
            {
                print_linked_list(head);
            }
            
        }
        
    }

    return 0;
}