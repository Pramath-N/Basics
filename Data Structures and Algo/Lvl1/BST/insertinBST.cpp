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





Node*insertBST(Node* root, int ele){

    //Recursive: 
    // if(root == NULL){
    //     return new Node(ele);
    // }
    // if(ele > root -> key){
    //     root -> right = insertBST(root -> right , ele);
    // }
    // if(ele < root -> key){
    //     root -> left = insertBST(root -> left , ele);
    // }
    // return root;

    //Iterative:
    Node* curr = root, *parent = NULL;
    Node* temp = new Node(ele);
    
    while(curr != NULL){
        parent = curr;
        if(curr -> key > ele){
            curr = curr -> left;
        }
        else if(curr -> key == ele) return root;

        else if(curr -> key < ele){
            curr = curr -> right;
        }
    }

    if(parent  == NULL){
        return temp;
    }
    if(parent -> key > ele) parent -> left = temp;
    else if(parent -> key < ele) parent -> right = temp;

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
    root = insertBST(root, 7);
    std::cout<<"\nAfter:  \n";
    printBT(root);

    
    return 0;
}