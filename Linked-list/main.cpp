#include <iostream>
using namespace std;

// g++ ./Linked-list/main.cpp -o ./Linked-list/main && ./Linked-list/main

struct Node{
    int value;
    struct Node *next;
};
struct Node *head;

void insert_at_beginning(struct Node **list,int n);
void print_list(struct Node *list);

int main(){

    insert_at_beginning(&head,2);
    insert_at_beginning(&head,3);
    insert_at_beginning(&head,4);

    print_list(head);
    cout <<endl;
    return 0;
}


void insert_at_beginning(struct Node **list , int n){
    struct Node *temp1 = new Node();
    temp1->value = n;
    temp1->next = (*list);
    *list = temp1;
}
// void insert_at_beginning(int n){
//     struct Node *temp1 = new Node();
//     temp1->value = n;
//     temp1->next = head->next;
//     head = temp1;
// }

void print_list(struct Node *list){
    struct Node *temp1 = list;
    while(temp1 != NULL){
        cout << temp1->value << " ";
        temp1 = temp1->next;
    };
    cout << endl;
}
