#include <iostream>
using namespace std;

// g++ ./Linked-list/main.cpp -o ./Linked-list/main && ./Linked-list/main

struct Node{
    int value;
    struct Node *next;
};
Node *head;

void insert_at_beginning(Node **list,int n);
void print_list(Node *list);
void insert_at_nth(Node **list, int n,int p);
void delete_nth(Node **list,int p);
void reverse_list(Node **list);
void print_forward(Node *list);
void print_reverse(Node *list);

int main(){
    insert_at_beginning(&head,1);
    insert_at_beginning(&head,2);
    insert_at_beginning(&head,3);
    insert_at_beginning(&head,4);
    insert_at_nth(&head,5,3);
    insert_at_nth(&head,6,1);
    // delete_nth(&head,4);

    print_list(head);
    //print_reverse(head);
    //print_forward(head);
    cout <<endl;
    return 0;
}


void insert_at_beginning(Node **list , int n){
    Node *temp1 = new Node();
    temp1->value = n;
    temp1->next = (*list);
    *list = temp1;
}
// void insert_at_beginning(int n){
//     Node *temp1 = new Node();
//     temp1->value = n;
//     temp1->next = head->next;
//     head = temp1;
// }

void print_list(Node *list){
    Node *temp1 = list;
    while(temp1 != NULL){
        cout << temp1->value << " ";
        temp1 = temp1->next;
    };
    cout << endl;
}

void insert_at_nth(Node **list,int n,int p){
    Node *temp1 = *list;
    if(p==1){
        Node *temp2=new Node();
        temp2->value= n;
        temp2->next= temp1;
        *list = temp2;
        return;
    }

    for(int i =0;i<p-2;i++){
        temp1 = temp1->next;
    }
    Node *temp2 = new Node();
    temp2->value= n;
    temp2->next = temp1->next;
    temp1->next = temp2;
}

void delete_nth(Node **list,int p){
    Node *temp1 = *list;
    if(p==1){
        temp1 = temp1->next;
        *list = temp1;
        return;
    }   

    for(int i =0;i<p-2;i++){
        temp1 = temp1->next;
    }
    Node *temp2 = temp1->next;
    temp1->next = temp2->next;
}

void reverse_list(Node **list){
    Node *prev,*next,*current;
    current = *list;
    prev = NULL;
    while(current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    *list = prev;
}

void print_forward(Node *list){
    Node *temp1 = list;
    if(temp1 == NULL){
        return;
    }
    cout << temp1->value << " ";
    print_forward(temp1->next);
}

void print_reverse(Node *list){
    Node *temp1 = list;
    if(temp1 == NULL){
        return;
    }
    print_reverse(temp1->next);
    cout << temp1->value << " ";
}