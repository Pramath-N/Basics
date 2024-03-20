#include<bits/stdc++.h>
void moveZeros(int arr[], int n){
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 0){
    //         for(int j = i + 1; j < n; j++){
    //             if(arr[j] != 0) {std::swap(arr[i], arr[j]); break;}
    //         }
    //     }
    // }
//Optimal
    int ind = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            std::swap(arr[i], arr[ind]);
            ind++;
        }
    }
}
int main(){
    int arr[] = {0, 56, 77, 0 , 12, 0, 34};
    for(int i = 0; i < 7; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
    moveZeros(arr, 7);
    for(int i = 0; i < 7; i++){
        std::cout<<arr[i]<<" ";
    }
}