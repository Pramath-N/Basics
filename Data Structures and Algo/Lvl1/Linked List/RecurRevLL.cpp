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
    if(head->next == NULL || head == NULL){
        return head;
    }
    Node* resthead = Rev(head->next);
    Node* resttail = head->next; 
    resttail->next = head;
    head->next = NULL;
    return resthead;
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
    // first->next = new Node(20);
    // first->next->next = new Node(25);
    // first->next->next->next = new Node(30);
    Node* head = Rev(first);
    PrintList(head);
}