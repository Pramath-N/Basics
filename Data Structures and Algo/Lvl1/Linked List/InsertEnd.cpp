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

Node* InsertEnd(Node *head, int key){
    Node* current = head;
    if(head == NULL) return new Node(key);
    while(current->next != NULL){
        current = current->next;
    }
    current->next = new Node(key);
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

    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    first->next->next->next = new Node(69);
    first->next->next->next->next = new Node(28);
    //Node *first = NULL;
    int key;
    std::cout<<"Enetr the element to be inserted: ";
    std::cin>>key;
    first = InsertEnd(first,key);
    PrintList(first);
    return 0;
}