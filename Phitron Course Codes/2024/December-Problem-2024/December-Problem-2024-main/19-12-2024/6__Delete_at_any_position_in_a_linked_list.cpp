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

void delete_at_any_position(Node* &head,int index){
    Node *temp = head;
    for (int i = 0; i < index -1 ; i++)
    {
        temp = temp->next;
    }
    Node *delete_node = temp->next;
    temp->next = temp->next->next;
    delete delete_node;
    
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


    // before delteing the item or delete at any positon 

    print_linked_list(head);


    // after delelting a item ay any position

    delete_at_any_position(head,2);

    print_linked_list(head);

    return 0;
}