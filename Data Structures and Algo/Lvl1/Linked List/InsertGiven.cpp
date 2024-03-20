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

Node* InsertGiven(Node *head, int value, int pos){
     Node *temp = new Node(value) ,*curr= head;
    if(pos == 0){
        std::cout<<"Error: Cant insert at zeroth position"<<std::endl;
        return NULL;
    }
    if(pos == 1){
        temp->next = head;
        return temp;
    }
    int count = 0;
    while(count < pos -2){
        curr = curr ->next;
        count++;
    }
    if(curr == NULL) return head;
    
    temp ->next = curr->next;
    curr->next = temp;
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
    Node *head = new Node(10);
    // head->next = new Node(20);
    // head->next->next = new Node(30);
    // head ->next->next->next = new Node(50);
    head = InsertGiven(head,40,1);
    PrintList(head);
    return 0;
}