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

int main(){
    Node *first = new Node(10);
    first->next = new Node(20);
    std::cout<<first->next->data;
}