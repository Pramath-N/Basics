#include<bits/stdc++.h>

struct Deque{
    int *arr;
    int cap;
    int size;
    int front;
    Deque(int x){
        size = 0;
        front = 0;
        cap = x;
        arr = new int[x];
    }
    bool isfull(){
        if(size == cap -1) return true;
        return false; 
    }
    bool isempty(){
        if(size == 0) return true;
        return false;
    }
    int getfront(){
        if(size == 0) return INT_MIN;
        return arr[front];
    }
    int getrear(){
        if(size == 0) return INT_MIN;
        return arr[(front + size - 1) % cap];
    }
    void insert_front(int x){
        if(size == cap - 1) return; 
        front = (front + cap - 1) % cap;
        arr[front] = x;
        size++;
    }
    void insert_rear(int x){
        if(size == cap - 1) return;
        arr[(front + size)%cap] = x;
        size++;
    }
    void delete_front(){
        if(size == 0) return;
        front = (front+1)%cap;
        size--;
    }
    void delete_back(){
        if(size == 0) return;
        size--;
    }
};