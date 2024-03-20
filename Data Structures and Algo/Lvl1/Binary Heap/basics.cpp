#include<bits/stdc++.h>

struct myHeap{
    int *arr;
    int cap;
    int size;
    myHeap(int c){
        cap = c;
        arr = new int[cap] {0};
        size = 0;
    }

    int parent(int i){
        return (i - 1)/2;
    }
    
    int left(int i){
        return (2 * i + 1);
    }

    int right(int i){
        return (2 * i + 2);
    }

    //T.C = O(log(N)) As hieght = O(log(N))
    void insert(int x){
        if(size == cap - 1){
            std::cout<<"Overflow case!\n";
            return;
        }
        size++;
        arr[size - 1] = x;
        int i = size - 1;
        while(i != 0 && arr[parent(i)] > arr[i]){
            std::swap(arr[i], arr[(i -1) / 2]);
            i = parent(i);
        }
    }
    void printHeap(){
        std::cout<<"[";
        for(int i = 0; i < size; i++){
            if(i != size - 1) std::cout<<arr[i]<<", ";
            else std::cout<<arr[i];
        }
        std::cout<<"]";
    }
};

int main(){
    myHeap* hp = new myHeap(10);
    hp -> insert(2);
    hp -> insert(1);
    hp -> insert(100);
    hp -> printHeap();
}