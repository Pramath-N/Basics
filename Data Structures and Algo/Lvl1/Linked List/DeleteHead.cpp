#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *next; 
    Node(int x){
            data = x;
            next = NULL;
    }
};

Node* DeleteHead(Node *head){
    Node* current = head;
    if(head == NULL) return NULL;
    Node* temp = head->next;
    delete head;
    return temp;
}

void PrintList(Node* head){

    // recursive code

    // if(head->next == NULL){
    //     std::cout<<head->data<<std::endl;
    //     return;
    // }
    // std::cout<<head->data<<std::endl;;
    // PrintList(head->next);

    //Iterative code(Better as no aux space)
    
    while(head != NULL){
        std::cout<<head->data<<std::endl;
        head = head -> next;
    }
}

int main(){

    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    first->next->next->next = new Node(69);
    first->next->next->next->next = new Node(28);
    // Node *first = NULL;
    first = DeleteHead(first);
    PrintList(first);
    return 0;
}