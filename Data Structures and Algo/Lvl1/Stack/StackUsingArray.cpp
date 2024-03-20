#include<bits/stdc++.h>
struct myStack{
    int* arr;
    int cap;
    int top;
    myStack(int x){
        arr = new int[x];
        top = -1;
        cap = x;
    }
    void push(int x){
        if(top == cap - 1){
            std::cout<<"Stack Overflow"<<std::endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    int pop(){
        if(top == -1){
            std::cout<<"Stack Underflow"<<std::endl;
            return INT_MIN;
        }
        int x = arr[top];
        top--;
        return x;
    }

    int peek(){
        if(top == -1){
            std::cout<<"Stack Underflow"<<std::endl;
            return INT_MIN;
        }
        return arr[top];
    }

    int size(){
        return top+1;
    }

    bool isempty(){
        if(top == -1)return true;
        return false;
    }
};

int main(){
    myStack *st = new myStack(5);
    st -> push(20);
    st -> push(35);
    std::cout<<st -> peek()<<std::endl;
    st -> pop();
    std::cout<<st -> peek()<<std::endl;
    std::cout<<st -> isempty();
    return 0;
}