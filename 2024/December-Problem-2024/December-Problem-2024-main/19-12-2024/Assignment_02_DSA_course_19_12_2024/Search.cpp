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

int search_tagget(Node *head,int target){
    int count = 0;
    Node *temp =head;
    while (temp != NULL)
    {
        
        if (temp->value == target)
        {
            return count;
        }
        temp = temp->next;
        count++;
        
    }
    return -1;
    
}


int main()
{

    int test_case;
    cin >> test_case;

    while (test_case--)
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
        int target;cin >> target;
        cout << search_tagget(head,target) << endl;

    }
    



    return 0;
}