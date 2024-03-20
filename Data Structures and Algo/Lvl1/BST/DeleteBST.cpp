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


void printBT(const std::string& prefix, const Node* node, bool isLeft)
{
    if (node != nullptr)
    {
        std::cout << prefix;
        std::cout << (isLeft ? "|--" : "L--");
        // print the value of the node
        std::cout << node-> key << std::endl;
        // enter the next tree level - left and right branch
        printBT(prefix + (isLeft ? "|   " : "    "), node->right, true);
        printBT(prefix + (isLeft ? "|   " : "    "), node->left, false);
    }
}

void printBT(const Node* node)
{
    printBT("", node, false);
}


Node *getSuccessor(Node *curr){
    curr=curr->right;
    while(curr!=NULL && curr->left!=NULL)
        curr=curr->left;
    return curr;
}

Node *deleteBST(Node *root, int x){
    if(root==NULL)
        return root;
    if(root->key>x)
        root->left=deleteBST(root->left,x);
    else if(root->key<x)
        root->right=deleteBST(root->right,x);
    else{
        if(root->left==NULL){
            Node *temp=root->right;
            delete root;
            return temp;
        }
        else if(root->right==NULL){
            Node *temp=root->left;
            delete root;
            return temp;
        }
        else{
            Node *succ=getSuccessor(root);
            root->key=succ->key;
            root->right=deleteBST(root->right,succ->key);
        }
    }
    return root;
} 


int main(){
    Node* root = new Node(15);
    root -> left = new Node(10);
    root -> right = new Node(20);   
    root -> left -> left = new Node(5);
    root -> left ->right = new Node(12);    
    root -> left -> right -> left = new Node(11);
    root -> left -> right -> right = new Node(14);        
    root -> right -> left = new Node(18);
    root -> right -> right= new Node(25);

    std::cout<<"Before: \n";
    printBT(root);
    root = deleteBST(root, 10);
    std::cout<<"\nAfter:  \n";
    printBT(root);

    
    return 0;
}