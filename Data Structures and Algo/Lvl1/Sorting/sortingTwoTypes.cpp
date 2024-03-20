//Like sorting even and odds sort negative and positive, zeros and ones

//Example GIven an array of even and odd nos sort such that even elements come first and internal ordere doesnt matter

//Naive appproach is using temporary array

#include<bits/stdc++.h>

void sortEven(int arr[], int n){
    //Method - 1: donno what kind of approach
    // int ind = 0;
    // for(int i = 0; i < n; i++){
    //     if(arr[i] % 2 == 0){
    //         std::swap(arr[i] , arr[ind]);
    //         i--;
    //         ind++;
    //     }
    // }
     
    // Both O(n) T.C && O(1) S.C
    //Method 2 Using Hoars parttition
    int i = -1, j = n;
    while(true){
        do{i++;}while(arr[i] % 2 == 0);
        do{j--;}while(arr[j] % 2 != 0);
        if(i >= j) return;
        std::swap(arr[i], arr[j]);
    }
}

int main(){
    int arr[] = {13, 14, 17, 21, 32, 33, 54};
    int n = 7;

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;

    sortEven(arr, n);

    for(int i = 0; i < n; i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}