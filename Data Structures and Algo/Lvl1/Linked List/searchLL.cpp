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

int Search(Node *head, int key){
    
    //Recursive(HardToClick)

    // if(head == NULL) return -1;

    // if(head->data == key) return 1;
    // int res = Search(head->next,key);
    // if(res == -1) return -1;
    // return res + 1;


    //Iterative(Basically batter due to no aux space)
    int count = 1;
    while(head != NULL){
        if(head->data == key) return count;
        head = head->next;
        count++; 
    }
    return -1;
}

int main(){
    Node *first = new Node(10);
    first->next = new Node(20);
    first->next->next = new Node(25);
    first->next->next->next = new Node(69);
    first->next->next->next->next = new Node(28);
    int key;
    std::cout<<"Enetr the element to be searched: ";
    std::cin>>key;
    std::cout<<Search(first,key);
}