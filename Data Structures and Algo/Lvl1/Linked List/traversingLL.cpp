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
    PrintList(first);
}