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

void DelDup(Node *head){//Time complexity is theeta(position)
    if(head == NULL || head->next == NULL) return;
    Node* curr = head;
    while(curr->next != NULL){
        if(curr -> next -> data == curr->data){
            Node* temp = curr->next->next;
            curr->next = temp;
        }
        curr = curr->next;         
    }
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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head ->next->next->next = new Node(50);
    // head ->next->next->next = new Node(50);
    DelDup(head);
    PrintList(head);
    return 0;
}