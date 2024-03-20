#include<bits/stdc++.h>
struct myStack{
    std::vector<int> arr;
    myStack(){
        std::vector<int> arr;
    }
    void push(int x){
        arr.push_back(x);
    }

    int pop(){
        if(arr.size() == 0){
            std::cout<<"Stack Underflow"<<std::endl;
            return INT_MIN;
        }
        int x = arr.back();
        arr.pop_back();
        return x;
    }

    int peek(){
        if(arr.size() == 0){
            std::cout<<"Stack Underflow"<<std::endl;
            return INT_MIN;
        }
        return arr.back();
    }

    int size(){
        return arr.size();
    }

    bool isempty(){
        if(arr.size() == 0) return true;
        return false;
    }
};

int main(){
    myStack *st = new myStack();
    st -> push(20);
    st -> push(35);
    std::cout<<st -> peek()<<std::endl;
    st -> pop();
    std::cout<<st -> peek()<<std::endl;
    std::cout<<st -> isempty();
    return 0;
}