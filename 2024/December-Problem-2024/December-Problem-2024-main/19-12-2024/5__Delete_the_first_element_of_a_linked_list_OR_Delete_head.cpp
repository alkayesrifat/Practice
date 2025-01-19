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



// delete from head function
void delete_from_head(Node* &head){
    Node *storing_the_previous_head = head;
    head = head->next;
    delete storing_the_previous_head;
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

    // beforeing deleting the head 
    print_linked_list(head);



    // calling the delete head function for delteing the first element of the linkedlist

    delete_from_head(head);
    // after deleting the head


    print_linked_list(head);

    return 0;
}