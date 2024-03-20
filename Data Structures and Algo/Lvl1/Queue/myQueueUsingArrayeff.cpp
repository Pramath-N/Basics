#include<bits/stdc++.h>
struct myQueue{
    int* arr;
    int cap;
    int rear, front,size;

    myQueue(int x){
        arr = new int[x];
        rear = 0;
        front = 0;
        cap = x;
        size = 0;
    }

    void enqueue(int x){
        if(size == cap - 1){
            std::cout<<"Queue Overflow: \n";
        }
        rear = (rear + 1)%cap;
        arr[rear] = x;
        size++;
    } 
    void dequeue(){
        if(size == 0) std::cout<<"Queue Underflow: \n";
        front++;
        size--;
    }
    
    int getfront(){
        if(size == 0) return INT_MIN;
        return arr[front];
    }

    int getrear(){
    if(size == 0) return INT_MIN;
        return arr[rear];
    }


};

int main(){
    myQueue *mq = new myQueue(5);
    mq-> enqueue(20);
    std::cout<<mq -> getfront()<<std::endl;
    mq -> enqueue(35);
    mq -> enqueue(45);
    std::cout<<mq -> getrear()<<std::endl;
    std::cout<<mq -> getfront()<<std::endl;
    mq -> dequeue();
    std::cout<<mq -> getfront()<<std::endl;
    std::cout<<mq -> getrear()<<std::endl;
    // std::cout<<mq -> isempty();
    return 0;
}