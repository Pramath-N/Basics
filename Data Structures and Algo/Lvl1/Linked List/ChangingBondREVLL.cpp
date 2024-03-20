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

Node* Rev(Node* head){
    Node* prev = NULL;
    Node* next = head -> next;
    Node* curr = head;
    while(curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
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
    first->next->next->next = new Node(30);
    Node* head = Rev(first);
    PrintList(head);
}