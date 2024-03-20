#include<bits/stdc++.h>

int minFlips(int arr[], int n){
    int flipz = 0, flipo = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 0) flipz++;
    }
    flipo = n - flipz;
    int beg = -1;
    if(flipz < flipo){
         for(int i = 0; i <= n; i++){
            if(i == n){
                if(arr[i - 1] == 0) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
                break;
            }
            if(arr[i] == 0 && beg == -1) beg = i;
            if(arr[i] == 1){
                if(arr[i - 1] == 0) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
            }
        }
    }else if(flipz > flipo){
        for(int i = 0; i <= n; i++){
            if(i == n){
                if(arr[i - 1] == 1) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
                break;
            }
            if(arr[i] == 1 && beg == -1) beg = i;
            if(arr[i] == 0){
                if(arr[i - 1] == 1) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
            }
        }
    }else{
        for(int i = 0; i <= n; i++){
            if(i == n){
                if(arr[i - 1] == 1) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
                break;
            }
            if(arr[i] == 1 && beg == -1) beg = i;
            if(arr[i] == 0){
                if(arr[i - 1] == 1) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
            }
        }
        std::cout<<"or "<<std::endl;

        for(int i = 0; i <= n; i++){
            if(i == n){
                if(arr[i - 1] == 0) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
                break;
            }
            if(arr[i] == 0 && beg == -1) beg = i;
            if(arr[i] == 1){
                if(arr[i - 1] == 0) std::cout<<beg<<" to "<<i - 1<<std::endl;
                beg = -1;
            }
        }
    }
}

int main(){
    int arr[] = {1, 0, 0, 0, 1, 1};
    int n = 6;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    minFlips(arr, n);
}