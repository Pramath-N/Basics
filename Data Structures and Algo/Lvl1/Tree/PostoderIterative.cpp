#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    Node* left;
    Node* right;
    Node(int k){
        key = k;
        left = right = NULL;
    }
};

void PostorderTraversal(Node* root){
    std::stack<Node*> st1 , st2;
    st1.push(root);
    while(!st1.empty()){
        Node* temp = st1.top();
        st1.pop();
        st2.push(temp);
        if(temp -> left != NULL) st1.push(temp -> left);
        if(temp -> right != NULL) st1.push(temp -> right);
    }
    while(!st2.empty()){
        std::cout<<st2.top() -> key<<", ";
        st2.pop();
    }
}

int main(){
    Node* root = new Node(10);
    root -> left = new Node(20);
    root -> right = new Node(30);   
    root -> left -> left = new Node(40);
    root -> left ->right = new Node(50);    
    root -> left -> right -> left = new Node(80);
    root -> left -> right -> right = new Node(90);        
    root -> right -> left = new Node(60);
    root -> right -> right= new Node(70);
    PostorderTraversal(root);
    return 0;
}