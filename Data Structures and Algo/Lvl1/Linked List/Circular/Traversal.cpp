#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

void PrintList(Node* head){
    // if(head == NULL) return;
    //Node* curr = head;

    // std::cout<<head -> data << std::endl;
    // while(curr != head){
    //     std::cout<< curr -> data<<std::endl;
    //     curr = curr -> next;
    // }
    //Efficient one:
    if(head == NULL) return;
    Node* curr = head;
    do{
        std::cout<<curr -> data << std::endl;
        curr = curr -> next;
    }while(curr != head);

}

int main(){
    Node* head = new Node(10);
    head -> next = new Node(20);
    head -> next -> next = new Node(30);
    head -> next -> next -> next = new Node(40);
    head -> next -> next -> next -> next = new Node(50);
    head -> next -> next -> next -> next -> next = head;
    PrintList(head);
    return 0;
}