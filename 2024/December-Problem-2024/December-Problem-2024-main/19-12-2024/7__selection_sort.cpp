#include<bits/stdc++.h>
using namespace std;
// node creat kortaci
class Node{
    public:
    int value;
    Node *next = NULL;
    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};
// linked list print function
void print_linked_list(Node *head){

    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
    cout << endl;
}

// Add at tail function                   here used for input the linkedlist, eta tail e add kora , ba last e add korar jonno o bebohar kora hoy

void add_element_at_tail(Node* &head,Node* &tail,int val){

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


// delete at any position er function

void selection_sort_linked_list(Node *head){

    Node *temp = head;
    for (Node *i = temp; i->next!=NULL;  i = i->next)
    {
        for ( Node *j = i->next; j !=NULL;  j = j->next)
        {
            if (i->value > j->value)
            {
                swap(i->value,j->value);
            }
            
        }
        
    }
    

}




int main(){

    Node *head = NULL;
    Node *tail = NULL;

    int the_input_value;

    while (1)
    {
        cin >> the_input_value;
        if (the_input_value == -1)
        {
            break;
        }
        add_element_at_tail(head,tail,the_input_value);
    }

    // before sorting the linkedlist

    print_linked_list(head);

    // after sorting the linked list
    selection_sort_linked_list(head);
    

    print_linked_list(head);
    

    return 0;
}