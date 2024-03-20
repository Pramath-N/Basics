#include<bits/stdc++.h>
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = NULL;
    }
};

Node*Delete(Node* head,int k){
    if(head == NULL) return NULL;
    if(head -> next == head){
        delete head;
        return NULL;
    }
    if(k == 1){
        std::swap(head -> data, head -> next -> data);
        Node* temp = head  -> next;
        head -> next = head -> next -> next;
        delete temp;
        return head;
    }
    Node* curr = head;
    for(int i = 0; i < k-2; i++){
        curr = curr -> next;
    }
    Node* temp = curr -> next;
    curr -> next = curr -> next -> next;
    delete temp;
    return head;
}

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
    int k = -1;
    Node* head = new Node(10);
    head -> next = head;
    // head -> next = new Node(20);
    // head -> next -> next = new Node(30);
    // head -> next -> next -> next = new Node(40);
    // head -> next -> next -> next -> next = new Node(50);
    // head -> next -> next -> next -> next -> next = head;
    std::cout<<"Enter K: \n";
    std::cin>>k;
    std::cout<<"First Time: \n";
    PrintList(head);
    head = Delete(head,k);
    std::cout << "Later ....."<<std::endl;
    PrintList(head);
    return 0;
}