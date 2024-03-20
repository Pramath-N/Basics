#include<bits/stdc++.h>
struct myQueue{
    int* arr;
    int cap;
    int rear;
    myQueue(int x){
        arr = new int[x];
        rear = -1;
        cap = x;
    }
    void enqueue(int x){
        if(rear == cap - 1){
            std::cout<<"Queue Overflow"<<std::endl;
            return;
        }
        rear ++;
        arr[rear] = x;
    }

    void dequeue(){
        if(rear == -1) std::cout<<"Queue Underflow"<<std::endl;
        for(int i = 0; i < rear +1; i++){
            arr[i] = arr[i+1];
        }
        rear--;
    }

    int getrear(){
        if(rear == -1){
            std::cout<<"Queue Underflow"<<std::endl;
            return INT_MIN;
        }
        return arr[rear];
    }

    int getfront(){
        if(rear == -1){
            std::cout<<"Queue Underflow"<<std::endl;
            return INT_MIN;
        }
        return arr[0];
    }

    int size(){
        return rear+1;
    }

    bool isempty(){
        if(rear == -1)return true;
        return false;
    }
};

int main(){
    myQueue *mq = new myQueue(5);
    mq-> enqueue(20);
    mq -> enqueue(35);
    mq -> enqueue(45);
    std::cout<<mq -> getrear()<<std::endl;
    std::cout<<mq -> getfront()<<std::endl;
    mq -> dequeue();
    std::cout<<mq -> getfront()<<std::endl;
    std::cout<<mq -> getrear()<<std::endl;
    std::cout<<mq -> isempty();
    return 0;
}