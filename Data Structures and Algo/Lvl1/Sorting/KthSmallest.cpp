//Given an unosrted array and k find kth smallest elemnt in the array

#include<bits/stdc++.h>

int kThSmallest(int arr[], int n, int k){
    std::sort(arr, arr + n);
    return arr[k - 1];
}

int main(){
    int arr[] = {10, 5, 30,2};
    int n = 4;
    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<' ';
    }
    std::cout<<std::endl;
    int k = 2;
    std::cout<<"The kth smallest element is : "<<kThSmallest(arr, n, k);
    return 0;
}