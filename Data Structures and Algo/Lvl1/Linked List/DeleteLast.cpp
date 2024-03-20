#include<bits/stdc++.h>
using namespace std;

//O(N-1)

struct Node{
    int data;
    Node *next; 
    Node(int x){
            data = x;
            next = NULL;
    }
};

Node* DeleteEnd(Node *head){
    if(head == NULL ) return NULL;
    if(head->next == NULL) head = NULL;
    Node* curr = head;
    while(curr->next->next != NULL){
        curr = curr->next;
    }    
    
    delete curr->next;
    curr->next = NULL;
    return head;
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

    // Node *first = new Node(10);
    // first->next = new Node(20);
    // first->next->next = new Node(25);
    // first->next->next->next = new Node(69);
    // first->next->next->next->next = new Node(28);
    // Node *first = NULL;
    Node* first = new Node(10);
    first = DeleteEnd(first);
    PrintList(first);
    return 0;
}