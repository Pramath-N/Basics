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

Node* InsertSorted(Node *head, int value){//Time complexity is theeta(position)
    Node *temp = new Node(value) ,*curr= head;
    if(value < head->data){
        temp ->next = head;
        return temp;
    }
    if (head == NULL) return temp;
    while(curr->next != NULL && value > curr->next->data ){
        curr = curr ->next;
    }
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
    head->next = new Node(20);
    head->next->next = new Node(30);
    head ->next->next->next = new Node(50);
    head = InsertSorted(head,40);
    PrintList(head);
    return 0;
}