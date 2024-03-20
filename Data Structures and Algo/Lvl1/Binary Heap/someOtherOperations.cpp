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
        std::cout<<"] \n";

    }

    //T.C = O(log(n))
    //Auc Space : O(log(n))
    void minHeapify(int i){
        int lt = left(i); 
        int rt = right(i); 
        int smallest = i; 
        if (lt < size && arr[lt] < arr[i]) 
            smallest = lt; 
        if (rt < size && arr[rt] < arr[smallest]) 
            smallest = rt; 
        if (smallest != i) 
        { 
            std::swap(arr[i],arr[smallest]); 
            minHeapify(smallest); 
        } 
    }

    int extractMin(){
        if(size == 0) return INT_MAX;
        if(size == 1){
            size--;
            return arr[size];
        }
        std::swap(arr[0] , arr[size - 1]);
        size --;
        minHeapify(0);
        return arr[size];
    }

// T.C = O(log(n)) S.C O(1);
    void decKey(int ind, int x){
        arr[ind] = x;
        while(ind != 0 && arr[ind] < arr[parent(ind)]){
            std::swap(arr[ind], arr[parent(ind)]);
            ind = parent(ind);
        }
    }

    void del(int index){
        decKey(index, INT_MIN);
        extractMin();
    }
};


int main(){
    myHeap* hp = new myHeap(10);
    hp -> insert(20);
    hp -> insert(10);
    hp -> insert(100);
    hp -> insert(30);
    hp -> insert(43);
    hp -> insert(55);
    hp -> printHeap();

    hp -> del(4);

    hp -> printHeap();
}